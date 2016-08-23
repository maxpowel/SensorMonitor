//
// Created by alvaro on 8/08/15.
//

#ifndef SENSOR_MONITOR_BMP180DEVICE_H
#define SENSOR_MONITOR_BMP180DEVICE_H

#include "MultipleValueDevice.h"

#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BMP085_U.h>

class BMP180Device: public MultipleValueDevice {
private:
    char name[10];
    Adafruit_BMP085_Unified *sensor_;
public:
    BMP180Device();
    const char* getName();
    int totalValues();
    int getValues(float *values);
    const char* getSensorType();
    const int getSensorQuantities(int quantities[]);
};

#endif //SENSOR_MONITOR_BMP180DEVICE_H
