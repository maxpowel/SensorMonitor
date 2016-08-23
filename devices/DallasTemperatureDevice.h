//
// Created by alvaro on 8/08/15.
//

#ifndef SENSOR_MONITOR_DALLASTEMPERATUREDEVICE_H
#define SENSOR_MONITOR_DALLASTEMPERATUREDEVICE_H

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
    const char* getSensorType();
    const int getSensorQuantities(int quantities[]);
};


#endif //SENSOR_MONITOR_DALLASTEMPERATUREDEVICE_H
