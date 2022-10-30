#include <ros/ros.h>
#include <Eigen/Eigen>
#include <math.h>
#include <mavros_msgs/CommandBool.h>
#include <mavros_msgs/SetMode.h>
#include <mavros_msgs/State.h>
#include <mavros_msgs/AttitudeTarget.h>
#include <mavros_msgs/PositionTarget.h>
#include <geometry_msgs/PoseStamped.h>
#include <geometry_msgs/TwistStamped.h>
#include <mavros_msgs/ActuatorControl.h>
#include <sensor_msgs/Imu.h>
#include <bitset>
#include<darknet_ros_msgs/BoundingBoxes.h>
#include<darknet_ros_msgs/BoundingBox.h>
using namespace std;

// # float64 probability
// # int64 xmin
// # int64 ymin
// # int64 xmax
// # int64 ymax
// # int16 id
// # string Class

// # Header header
// # Header image_header
// # BoundingBox[] bounding_boxes



/*   Speed sent to movros  */
double movx = 0;
double movy = 0;
double movz = 0;
/*Camera size*/
double camW = 1280;
double camH = 720;


void targetCapture(const darknet_ros_msgs::BoundingBoxes::ConstPtr &msg){
    
    
    double xmin = msg->bounding_boxes[0].xmin;
	double ymin = msg->bounding_boxes[0].ymin;
	double xmax = msg->bounding_boxes[0].xmax;
	double ymax = msg->bounding_boxes[0].ymax;

    // # wait for adjust 
    //     # Width/Height      : 1280/720
    
    string s = msg ->bounding_boxes[0].Class;
    if(s=="end"){
        movz = 0.1;
        cout<<"down"<<endl;
    } 
    else if(s=="bridge"||s=="tent"||s=="barracks"||s=="car"||s=="tank"){
        double centerx  = camW/2;
        double centery = camH/2;
        double xadj = 10;
        double yadj = 10;
        double boxcenterx = (xmin+xmax)/2;
        double boxcentery = (ymin+ymax)/2;
       // double movex = 0.1;
       // double movey = 0.1;
        if(centerx-boxcenterx>xadj){// > 0  left
            movx = -0.1;
            cout<<"turn left!"<<endl;
        }
        else if(centerx-boxcenterx<-xadj){//<0 right
            movx = 0.1;
            cout<<"turn right !"<<endl;
        }
        else {
            movx = 0;
            cout<<"xstop"<<endl;
        }

        if(centery-boxcentery>yadj){// > 0  back
            movy = -0.1;
            cout<<"go back"<<endl;
        }
        else if(centery-boxcentery<-yadj){//<0 straight
            movy = 0.1;
            cout<<"go straight!"<<endl;
        }
        else {
            movy = 0;
            cout<<"ystop"<<endl;
        }
        
    }


}

 void pos_target(const mavros_msgs::PositionTarget::ConstPtr& msg)
        {

            Eigen::Vector3d pos;
            Eigen::Vector3d vel;
            Eigen::Vector3d accel;
            pos   = Eigen::Vector3d(0.0,0.0,0.0);
            vel  = Eigen::Vector3d(0.0,0.0,0.0);
            accel   = Eigen::Vector3d(0.0,0.0,0.0);

            pos = Eigen::Vector3d(msg->position.x, msg->position.y, msg->position.z);

            vel = Eigen::Vector3d(msg->velocity.x, msg->velocity.y, msg->velocity.z);

            accel = Eigen::Vector3d(msg->acceleration_or_force.x, msg->acceleration_or_force.y, msg->acceleration_or_force.z);

        // test sub
         // cout << "Pos_target [X Y Z] : " << pos[0] << " [ m ] "<< pos[1]<<" [ m ] "<<post[2]<<" [ m ] "<<endl;
    // cout << "Yaw_target : " << euler_fcu_target[2] * 180/M_PI<<" [deg] "<<endl;


        }

void sentMessage(ros::Publisher mavpub){

    mavros_msgs::PositionTarget pos_setpoint;
//Bitmask toindicate which dimensions should be ignored (1 means ignore,0 means not ignore; Bit 10 must set to 0)
    //Bit 1:x, bit 2:y, bit 3:z, bit 4:vx, bit 5:vy, bit 6:vz, bit 7:ax, bit 8:ay, bit 9:az, bit 10:is_force_sp, bit 11:yaw, bit 12:yaw_rate
    //Bit 10 should set to 0, means is not force sp
    pos_setpoint.type_mask = 0b100111000111;

    pos_setpoint.coordinate_frame = 1;

    pos_setpoint.velocity.x = movx;
    pos_setpoint.velocity.y = movy;
    pos_setpoint.velocity.z = movz;

   // pos_setpoint.yaw = yaw_sp;

    mavpub.publish(pos_setpoint);

}


int main( int argc,char **argv){
    ros::init(argc,argv,"target_capture");
    ros::NodeHandle nh;



    ros::Subscriber sub = nh.subscribe("/darknet_ros/bounding_boxes",10,targetCapture);
    ros:: Publisher mavpub =nh.advertise<mavros_msgs::PositionTarget>("/mavros/setpoint_raw/local", 10);
    sentMessage(mavpub);//sent message to mavros

    

    ros::Subscriber possub =nh.subscribe<mavros_msgs::PositionTarget>("/mavros/setpoint_raw/target_local", 10,pos_target);


    ros::spin();
    return 0;
}

