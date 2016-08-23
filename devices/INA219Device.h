//
// Created by alvaro on 8/08/15.
//

#ifndef SENSOR_MONITOR_INA219DEVICE_H
#define SENSOR_MONITOR_INA219DEVICE_H

#include "MultipleValueDevice.h"

#include <Wire.h>
#include <Adafruit_INA219.h>

class INA219Device: public MultipleValueDevice {
private:
    char name[10];
    Adafruit_INA219 *sensor_;
public:
    INA219Device();
    const char* getName();
    int totalValues();
    int getValues(float *values);
    const char* getSensorType();
    const int getSensorQuantities(int quantities[]);
};

#endif //SENSOR_MONITOR_INA219DEVICE_H
