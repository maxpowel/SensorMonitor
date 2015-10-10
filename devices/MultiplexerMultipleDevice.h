//
// Created by alvaro on 8/08/15.
//

#ifndef GARDEN_MONITOR_MULTIPLEXER_MULTIPLE_DEVICE_H
#define GARDEN_MONITOR_MULTIPLEXER_MULTIPLE_DEVICE_H


#include <Multiplexer.h>
#include "MultipleValueDevice.h"

class MultiplexerMultipleDevice : public MultipleValueDevice {
private:
    char name_[30];
    MultipleValueDevice *device_;
    Multiplexer *multiplexer_;
    int address_;
public:
    MultiplexerMultipleDevice(Multiplexer *multiplexer, MultipleValueDevice *device, int address);
    const char* getName();
    int totalValues();
    int getValues(float *values);
    const char* getSensorType();
    const int getSensorQuantities(int quantities[]);
};



#endif //GARDEN_MONITOR_MULTIPLEXER_MULTIPLE_DEVICE_H
