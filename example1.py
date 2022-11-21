#!/usr/bin/envpython 



from __future__ import print_function 

import time 

from dronekit import connect, VehicleMode, LocationGlobalRelative 

 

 


connection_string ='/dev/ttyACM0' 

print('Connectingto vehicle on: %s' % connection_string) 


vehicle =connect(connection_string, wait_ready=True,baud=921600) 

 


def arm_and_takeoff(aTargetAltitude):
    print("Basic pre-armchecks") 

    # while not vehicle.is_armable: 
    #     print(" Waiting for vehicle toinitialise...") 
    #     time.sleep(1) 

    print("Arming motors") 

    vehicle.mode =VehicleMode("STABILIZE") 

    vehicle.armed = True 

    while not vehicle.armed: 
        print(" Waiting forarming...") 
        time.sleep(1) 

    print("Taking off!") 

    vehicle.simple_takeoff(aTargetAltitude) 

    while True: 
        print(" Altitude: ",vehicle.location.global_relative_frame.alt) 
 
        if vehicle.location.global_relative_frame.alt>= 0: 
            print("Reached targetaltitude") 
            break 

        time.sleep(1) 

 
# def takeoff(self, mode="STABILIZE", altitude=7):
#         # Mode can be GUIDED or STABILIZE
#         # altitude is in meters
#         if not self.vehicle:
#             return False
            
#         self.vehicle.mode = VehicleMode(mode)
        
#         if not self.vehicle.armed and self.vehicle.is_armable:
#             self.vehicle.armed = True
#         elif not self.vehicle.armed:
#             # Not armed and can't arm it.  Just exit
#             return False
        
#         while not self.vehicle.armed:
#             sleep(1)
            
#         self.vehicle.simple_takeoff(altitude)
        
#         # self.vehicle.location.global_relative_frame.alt will tell you if it's there yet
#         # Say while < 0.95 * altitude
#         return True 

# takeoff()
arm_and_takeoff(10) 

 


print("Setdefault/target airspeed to 3") 



vehicle.airspeed =3 

 



print("Goingtowards first point for 30 seconds ...") 


point1 =LocationGlobalRelative(-35.361354, 149.165218, 20) 



vehicle.simple_goto(point1) 

 


time.sleep(30) 

 



print("Goingtowards second point for 30 seconds (groundspeed set to 10 m/s) ...") 


point2 =LocationGlobalRelative(-35.363244, 149.168801, 20) 



vehicle.simple_goto(point2,groundspeed=10) 

 



time.sleep(30) 

 


print("Returningto Launch") 


vehicle.mode =VehicleMode("RTL") 

 

print("Closevehicle object") 

vehicle.close() 
