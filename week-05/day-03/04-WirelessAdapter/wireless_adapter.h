#ifndef INC_04_WIRELESSADAPTER_WIRELESS_ADAPTER_H
#define INC_04_WIRELESSADAPTER_WIRELESS_ADAPTER_H

#include "usb_device.h"
#include "network_device.h"

class WirelessAdapter : public USBDevice, public NetworkDevice{
public:
    WirelessAdapter(int id, int usbType, int bandwidth);

public:


};


#endif //INC_04_WIRELESSADAPTER_WIRELESS_ADAPTER_H
