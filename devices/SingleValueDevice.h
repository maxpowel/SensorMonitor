//
// Created by alvaro on 8/08/15.
//

#ifndef GARDEN_MONITOR_SINGLEVALUEDEVICE_H
#define GARDEN_MONITOR_SINGLEVALUEDEVICE_H

#include "Device.h"

class SingleValueDevice: public Device {
public:
    int getValues(float *values);
    bool multipleValues();
};


#endif //GARDEN_MONITOR_SINGLEVALUEDEVICE_H
