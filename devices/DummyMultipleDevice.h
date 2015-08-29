//
// Created by alvaro on 8/08/15.
//

#ifndef GARDEN_MONITOR_DUMMYMULTIPLEDEVICE_H
#define GARDEN_MONITOR_DUMMYMULTIPLEDEVICE_H

#include "MultipleValueDevice.h"

class DummyMultipleDevice: public MultipleValueDevice{
public:
    const char* getName();
    int totalValues();
    int getValues(float *values);
    const char* getSensorType();
    const int getSensorQuantities(int quantities[]);
};


#endif //GARDEN_MONITOR_DUMMYMULTIPLEDEVICE_H
