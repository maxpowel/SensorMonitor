//
// Created by alvaro on 8/08/15.
//

#ifndef GARDEN_MONITOR_BMP180DEVICE_H
#define GARDEN_MONITOR_BMP180DEVICE_H

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
};

#endif //GARDEN_MONITOR_BMP180DEVICE_H
