#!/bin/sh
#mkdir -p /system
#mount -t overlay overlay -o lowerdir=/usr/libexec/droid-hybris/system:/system_root/system /system

# Disabled overall overay because it crashes graphics composer. Manually picking:

# Get rid of some cgroup messages
mount --bind /usr/libexec/droid-hybris/system/lib64/libprocessgroup_setup.so /system/lib64/libprocessgroup_setup.so 
mount --bind /usr/libexec/droid-hybris/system/lib64/libprocessgroup.so /system/lib64/libprocessgroup.so 

mkdir -p /persist
mount --bind /mnt/vendor/persist /persist

# Overlay /odm over /vendor?
#mount -t overlay overlayodm -olowerdir=/odm:/vendor /vendor

# Overlay /product/vendor_overlay over /vendor
#mount -t overlay overlay -olowerdir=/product/vendor_overlay/29:/vendor

# Is this fixing audio?
mkdir -p /product
mount --bind /system/product /product

# if using a system with vendor included, this is needed for wlan to work
if [ ! -L /system/vendor ]; then
	mount --bind /vendor /system/vendor
fi



# makes audio_tuning_mixer.txt error go away
mount -t overlay overlay -o lowerdir=/odm/vendor-etc-overlay:/vendor/etc /vendor/etc
