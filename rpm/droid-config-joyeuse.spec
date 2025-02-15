# These and other macros are documented in ../droid-configs-device/droid-configs.inc
# Feel free to cleanup this file by removing comments, once you have memorised them ;)

# These and other macros are documented in
# ../droid-configs-device/droid-configs.inc

%define device joyeuse
%define vendor xiaomi

%define vendor_pretty Xiaomi
%define device_pretty Redmi Note 9 Pro

# Community HW adaptations need this
%define community_adaptation 1

%define android_version_major 10

%define ofono_enable_plugins bluez5,hfp_ag_bluez5

Provides: ofono-configs
Obsoletes: ofono-configs-mer
Obsoletes: ofono-configs-binder

# Device-specific usb-moded configuration
Provides: usb-moded-configs
Obsoletes: usb-moded-defaults

Requires: libgbinder-tools

# Sailfish OS is considered to-scale, if in the App Grid you get 4-in-a-row icons,
# and 2-in-a-row or 3-in-a-row app covers in the Home Screen, depending on
# how many apps are open.
# For 4-5.5" device screen sizes of 16:9 ratio, use this formula (hold portrait):
# pixel_ratio = 4.5/DiagonalDisplaySizeInches * HorizontalDisplayResolution/540
# Other screen sizes and ratios will require more trial-and-error.

%define pixel_ratio 1.5

%include droid-configs-device/droid-configs.inc
%include patterns/patterns-sailfish-device-adaptation-joyeuse.inc
%include patterns/patterns-sailfish-device-configuration-joyeuse.inc

# IMPORTANT if you want to comment out any macros in your .spec, delete the %
# sign, otherwise they will remain defined! E.g.:
#define some_macro "I'll not be defined because I don't have % in front"

