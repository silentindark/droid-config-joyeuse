#!/bin/sh
#mkdir -p /system
#mount -t overlay overlay -o lowerdir=/usr/libexec/droid-hybris/system:/system_root/system /system

# Disabled overall overay because it crashes graphics composer. Manually picking:

mount --bind /usr/libexec/droid-hybris/system/lib64/libprocessgroup_setup.so /system/lib64/libprocessgroup_setup.so 
mkdir -p /persist
mount --bind /mnt/vendor/persist /persist