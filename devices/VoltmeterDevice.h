//
// Created by alvaro on 8/08/15.
//

#ifndef GARDEN_MONITOR_VOLTMETERDEVICE_H
#define GARDEN_MONITOR_VOLTMETERDEVICE_H

#include "SingleValueDevice.h"
#include <VoltMeter.h>

class VoltmeterDevice: public SingleValueDevice {
private:
    VoltMeter *vmeter_;
public:
    VoltmeterDevice(int readPin, float r1, float r2, float referenceVoltage);
    const char* getName();
    float getValue();
};

#endif //GARDEN_MONITOR_VOLTMETERDEVICE_H
