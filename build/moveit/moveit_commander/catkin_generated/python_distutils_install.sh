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
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/rajendra/ws_moveit/src/moveit/moveit_commander"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/rajendra/ws_moveit/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/rajendra/ws_moveit/install/lib/python2.7/dist-packages:/home/rajendra/ws_moveit/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/rajendra/ws_moveit/build" \
    "/usr/bin/python2" \
    "/home/rajendra/ws_moveit/src/moveit/moveit_commander/setup.py" \
    build --build-base "/home/rajendra/ws_moveit/build/moveit/moveit_commander" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/rajendra/ws_moveit/install" --install-scripts="/home/rajendra/ws_moveit/install/bin"
