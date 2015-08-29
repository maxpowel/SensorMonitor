//
// Created by alvaro on 8/08/15.
//

#ifndef GARDEN_MONITOR_DEVICE_H
#define GARDEN_MONITOR_DEVICE_H


class Device {
public:
    virtual const char* getName();
    virtual int getValues(float *values);
    virtual float getValue();
    virtual bool multipleValues();
    virtual const char* getSensorType();
    virtual const int getSensorQuantities(int quantities[]);
};



#endif //GARDEN_MONITOR_DEVICE_H
