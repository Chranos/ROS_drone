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

echo_and_run cd "/home/yahboom/software/world_canvas/src/world_canvas_libs/world_canvas_client_py"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/yahboom/software/world_canvas/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/yahboom/software/world_canvas/install/lib/python2.7/dist-packages:/home/yahboom/software/world_canvas/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/yahboom/software/world_canvas/build" \
    "/usr/bin/python2" \
    "/home/yahboom/software/world_canvas/src/world_canvas_libs/world_canvas_client_py/setup.py" \
     \
    build --build-base "/home/yahboom/software/world_canvas/build/world_canvas_libs/world_canvas_client_py" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/yahboom/software/world_canvas/install" --install-scripts="/home/yahboom/software/world_canvas/install/bin"
