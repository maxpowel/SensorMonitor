//
// Created by alvaro on 8/08/15.
//

#ifndef GARDEN_MONITOR_DALLASTEMPERATUREDEVICE_H
#define GARDEN_MONITOR_DALLASTEMPERATUREDEVICE_H

#include "SingleValueDevice.h"
#include <DallasTemperature.h>

class DallasTemperatureDevice: public SingleValueDevice {
private:
    char name_[17];
    DallasTemperature *sensors_;
    DeviceAddress address_;
public:
    DallasTemperatureDevice(DallasTemperature *sensors, DeviceAddress address);
    const char* getName();
    float getValue();
};


#endif //GARDEN_MONITOR_DALLASTEMPERATUREDEVICE_H
