//
// Created by alvaro on 8/08/15.
//

#ifndef SENSOR_MONITOR_VOLTMETERDEVICE_H
#define SENSOR_MONITOR_VOLTMETERDEVICE_H

#include "SingleValueDevice.h"
#include <VoltMeter.h>

class VoltmeterDevice: public SingleValueDevice {
private:
    VoltMeter *vmeter_;
public:
    VoltmeterDevice(int readPin, float r1, float r2, float referenceVoltage);
    const char* getName();
    float getValue();
    const char* getSensorType();
    const int getSensorQuantities(int quantities[]);
};

#endif //SENSOR_MONITOR_VOLTMETERDEVICE_H
