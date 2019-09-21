#!/bin/sh
mkdir -p /system
mount -t overlay overlay -o lowerdir=/usr/libexec/droid-hybris/system:/system_root/system /system
 
