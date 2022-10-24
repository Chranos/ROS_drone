#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/chranos/ROS/ROS_drone/src/world_canvas/src/world_canvas_tools/rqt_annotation_data"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/chranos/ROS/ROS_drone/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/chranos/ROS/ROS_drone/install/lib/python2.7/dist-packages:/home/chranos/ROS/ROS_drone/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/chranos/ROS/ROS_drone/build" \
    "/usr/bin/python2" \
    "/home/chranos/ROS/ROS_drone/src/world_canvas/src/world_canvas_tools/rqt_annotation_data/setup.py" \
     \
    build --build-base "/home/chranos/ROS/ROS_drone/build/world_canvas/src/world_canvas_tools/rqt_annotation_data" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/chranos/ROS/ROS_drone/install" --install-scripts="/home/chranos/ROS/ROS_drone/install/bin"
