//
// Created by alvaro on 8/08/15.
//

#ifndef SENSOR_MONITOR_MULTIPLEXER_DEVICE_H
#define SENSOR_MONITOR_MULTIPLEXER_DEVICE_H


#include <Multiplexer.h>
#include "SingleValueDevice.h"

class MultiplexerDevice : public SingleValueDevice {
private:
    char name_[30];
    SingleValueDevice *device_;
    Multiplexer *multiplexer_;
    int address_;
public:
    MultiplexerDevice(Multiplexer *multiplexer, SingleValueDevice *device, int address);
    const char* getName();
    float getValue();
    const char* getSensorType();
    const int getSensorQuantities(int quantities[]);
};



#endif //SENSOR_MONITOR_MULTIPLEXER_DEVICE_H
