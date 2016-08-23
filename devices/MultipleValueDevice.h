//
// Created by alvaro on 8/08/15.
//

#ifndef SENSOR_MONITOR_MULTIPLEVALUEDEVICE_H
#define SENSOR_MONITOR_MULTIPLEVALUEDEVICE_H

#include "Device.h"

class MultipleValueDevice: public Device {
public:
    float getValue();
    bool multipleValues();
    virtual int totalValues();
};


#endif //SENSOR_MONITOR_MULTIPLEVALUEDEVICE_H
