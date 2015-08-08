//
// Created by alvaro on 8/08/15.
//

#ifndef GARDEN_MONITOR_MULTIPLEVALUEDEVICE_H
#define GARDEN_MONITOR_MULTIPLEVALUEDEVICE_H

#include "Device.h"

class MultipleValueDevice: public Device {
public:
    float getValue();
    bool multipleValues();
    virtual int totalValues();
};


#endif //GARDEN_MONITOR_MULTIPLEVALUEDEVICE_H
