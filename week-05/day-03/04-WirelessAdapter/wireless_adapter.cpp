#include "wireless_adapter.h"


WirelessAdapter::WirelessAdapter(int id, int usbType, int bandwidth) : USBDevice(id, usbType),
                                                                                NetworkDevice(id, bandwidth),
                                                                                Device(id){}
