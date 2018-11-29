#include "network_device.h"

NetworkDevice::NetworkDevice(int id, int bandwidth) : Device(id), _bandwidth(bandwidth) {}

int NetworkDevice::getBandwidth() const {
    return _bandwidth;
}
