//
// Created by alvaro on 8/08/15.
//

#ifndef SENSOR_MONITOR_SINGLEVALUEDEVICE_H
#define SENSOR_MONITOR_SINGLEVALUEDEVICE_H

#include "Device.h"

class SingleValueDevice: public Device {
public:
    int getValues(float *values);
    bool multipleValues();
};


#endif //SENSOR_MONITOR_SINGLEVALUEDEVICE_H
