//
// Created by alvaro on 31/10/16.
//

#ifndef SENSOR_MONITOR_DS3231_H
#define SENSOR_MONITOR_DS3231_H

#include "MultipleValueDevice.h"
#include <RtcDS3231.h>

class DS3231Device: public MultipleValueDevice {
private:
    RtcDS3231 Rtc;
public:
    DS3231Device();
    const char* getName();
    int totalValues();
    int getValues(float *values);
    static const char* getSensorType();
    const int getSensorQuantities(int quantities[]);
    static Device* fromConfig(void *);

};


#endif //SENSOR_MONITOR_DS3231_H
