#ifndef INC_04_WIRELESSADAPTER_DEVICE_H
#define INC_04_WIRELESSADAPTER_DEVICE_H


class Device {
public:
    Device(int id);
    int getId() const;

protected:
    int _id;
};


#endif //INC_04_WIRELESSADAPTER_DEVICE_H
