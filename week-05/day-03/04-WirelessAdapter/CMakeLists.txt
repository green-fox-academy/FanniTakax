cmake_minimum_required(VERSION 3.12)
project(04_WirelessAdapter)

set(CMAKE_CXX_STANDARD 14)

add_executable(04_WirelessAdapter main.cpp device.cpp device.h usb_device.cpp usb_device.h network_device.cpp network_device.h wireless_adapter.cpp wireless_adapter.h)