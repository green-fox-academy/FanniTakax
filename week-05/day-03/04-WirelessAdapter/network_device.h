#ifndef INC_04_WIRELESSADAPTER_NETWORK_DEVICE_H
#define INC_04_WIRELESSADAPTER_NETWORK_DEVICE_H

#include "device.h"

class NetworkDevice : virtual public Device {
public:
    NetworkDevice(int id, int bandwidth);
    int getBandwidth() const;

protected:
    int _bandwidth;
};


#endif //INC_04_WIRELESSADAPTER_NETWORK_DEVICE_H
