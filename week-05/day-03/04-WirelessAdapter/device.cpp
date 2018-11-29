#include "device.h"

Device::Device(int id) : _id(id) {}

int Device::getId() const {
    return _id;
}
