//
// Created by alvaro on 8/08/15.
//

#ifndef SENSOR_MONITOR_DUMMYDEVICE_H
#define SENSOR_MONITOR_DUMMYDEVICE_H

#include "SingleValueDevice.h"

class DummyDevice: public SingleValueDevice{
public:
    const char* getName();
    float getValue();
    const char* getSensorType();
    const int getSensorQuantities(int quantities[]);
};


#endif //SENSOR_MONITOR_DUMMYDEVICE_H
