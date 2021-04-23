#!/usr/bin/env bash
if [ ! -L /home/defaultuser/android_storage ]; then
    if [ ! -d /data/media/0 ]; then
        ln -s /data/media /home/defaultuser/android_storage
    else
        ln -s /data/media/0 /home/defaultuser/android_storage
    fi
fi
 
