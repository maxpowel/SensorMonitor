//
// Created by alvaro on 8/08/15.
//

#ifndef SENSOR_MONITOR_DHT_H
#define SENSOR_MONITOR_DHT_H

#include <Adafruit_Sensor.h>
#include "MultipleValueDevice.h"
#include <DHT.h>
#include <DHT_U.h>

class DHTDevice: public MultipleValueDevice {
private:
    char name_[17];
    DHT_Unified *sensor_;
    int pin_;
public:
    DHTDevice(int pin, int dhtType);
    const char* getName();
    int totalValues();
    int getValues(float *values);
    const char* getSensorType();
    const int getSensorQuantities(int quantities[]);
};



#endif //SENSOR_MONITOR_DHTMULTIPLEXERDEVICE_H
