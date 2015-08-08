//
// Created by alvaro on 8/08/15.
//

#ifndef GARDEN_MONITOR_DUMMYDEVICE_H
#define GARDEN_MONITOR_DUMMYDEVICE_H

#include "SingleValueDevice.h"

class DummyDevice: public SingleValueDevice{
public:
    const char* getName();
    float getValue();
};


#endif //GARDEN_MONITOR_DUMMYDEVICE_H
