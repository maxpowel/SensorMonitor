//
// Created by alvaro on 8/08/15.
//

#ifndef GARDEN_MONITOR_DHTMULTIPLEXERDEVICE_H
#define GARDEN_MONITOR_DHTMULTIPLEXERDEVICE_H


#include <Multiplexer.h>
#include "MultipleValueDevice.h"
#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>

class DHTMultiplexerDevice: public MultipleValueDevice {
private:
    char name_[17];
    DHT_Unified *sensor_;
    Multiplexer *multiplexer_;
    int address_;
public:
    DHTMultiplexerDevice(Multiplexer *multiplexer, int address, int dhtType);
    const char* getName();
    int totalValues();
    int getValues(float *values);
};



#endif //GARDEN_MONITOR_DHTMULTIPLEXERDEVICE_H
