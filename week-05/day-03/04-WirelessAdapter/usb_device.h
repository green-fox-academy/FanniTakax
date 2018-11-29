#ifndef INC_04_WIRELESSADAPTER_USB_DEVICE_H
#define INC_04_WIRELESSADAPTER_USB_DEVICE_H

#include "device.h"


class USBDevice : virtual public Device{
public:
    USBDevice(int id, int usbType);

protected:
    int _usbType;
};


#endif //INC_04_WIRELESSADAPTER_USB_DEVICE_H
