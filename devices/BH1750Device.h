//
// Created by alvaro on 8/08/15.
//

#ifndef GARDEN_MONITOR_BH1750DEVICE_H
#define GARDEN_MONITOR_BH1750DEVICE_H

#include <Wire.h>
#include <BH1750.h>

#include "SingleValueDevice.h"

class BH1750Device: public SingleValueDevice{
private:
    BH1750 *sensor_;

public:
    BH1750Device();
    const char* getName();
    float getValue();
    const char* getSensorType();
    const int getSensorQuantities(int quantities[]);
};



#endif //GARDEN_MONITOR_BH1750DEVICE_H
