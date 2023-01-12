# Feel free to disable non-critical HA parts during devel by commenting lines out
# Generated in hadk by executing: rpm/dhd/helpers/add_new_device.sh

%package -n patterns-sailfish-device-configuration-joyeuse
Summary: Jolla Configuration joyeuse
Requires: patterns-sailfish-device-configuration-common-joyeuse
Requires: patterns-sailfish-device-adaptation-joyeuse

# For devices with cellular modem. Those without one, please comment out:
Requires: patterns-sailfish-cellular-apps

# Early stages of porting benefit from these:
Requires: patterns-sailfish-device-tools

# Fix ohm crashing during calls
Requires: ohm >= 1.3.0-1
Requires: ohm-plugins-misc >= 1.5.8-1.2.6.jolla
Requires: libdres >= 1.1.17-1

# Nice to have
Requires: irremote
Requires: harbour-storeman

# Debugging
Requires: gstreamer1.0-tools

Requires: sailfish-content-graphics-z%{icon_res}

# For multi-SIM devices
Requires: jolla-settings-networking-multisim
Requires: jolla-settings-system-flashlight

# For devices which support NFC
Requires: jolla-settings-system-nfc
Requires: nfcd-dbuslog-plugin
Requires: nfcd-mce-plugin

# Introduced starting Sailfish OS 2.0.4.x:
# 3rd party accounts like Twitter, VK, cloud services, etc
Requires: jolla-settings-accounts-extensions-3rd-party-all

# Introduced starting Sailfish OS 2.1.1.26
# Required for Jolla Store Access
Requires: patterns-sailfish-consumer-generic

# For Mozilla location services (online)
Requires: geoclue-provider-mlsdb

# Devices with 2G or more memory should also include this booster
# to improve camera startup times and the like

# This is currently disabled as there's a race at startup with audio-hal-2 + audioservice and something
# like gst-droid or pulseaudio that makes no mic audio in calls if you enable the above services for proximity to work..
# The media booster worsenes this race it seems.
Requires: mapplauncherd-booster-silica-qt5-media

# boot logo is messing with boot order further, disabling
#Requires: yamuisplash

%description -n patterns-sailfish-device-configuration-joyeuse
Pattern with packages for joyeuse configurations

%files -n patterns-sailfish-device-configuration-joyeuse
