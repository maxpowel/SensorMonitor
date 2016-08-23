//
// Created by alvaro on 8/08/15.
//

#ifndef SENSOR_MONITOR_DEVICE_H
#define SENSOR_MONITOR_DEVICE_H


class Device {
public:
    virtual const char* getName();
    virtual int getValues(float *values);
    virtual float getValue();
    virtual bool multipleValues();
    virtual const char* getSensorType();
    virtual const int getSensorQuantities(int quantities[]);
};



#endif //SENSOR_MONITOR_DEVICE_H
