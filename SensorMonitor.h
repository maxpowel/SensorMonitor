//
// Created by alvaro on 26/07/15.
//

#ifndef SENSOR_MONITOR_MONITOR_H
#define SENSOR_MONITOR_MONITOR_H



#include "devices/Device.h"
#include "devices/SingleValueDevice.h"
#include "devices/MultipleValueDevice.h"
#include "devices/DummyDevice.h"
#include "devices/DummyMultipleDevice.h"
#include "devices/MultiplexerDevice.h"
#include "devices/MultiplexerMultipleDevice.h"
#include "devices/DallasTemperatureDevice.h"
#include "devices/DHTMultiplexerDevice.h"
#include "devices/DHTDevice.h"
#include "devices/VoltmeterDevice.h"
#include "devices/BMP180Device.h"
#include "devices/BH1750Device.h"
#include "devices/INA219Device.h"



#define SENSOR_MONITOR_MAX_DEVICES 32


class SensorMonitor {
public:
    SensorMonitor();
    int getTotalDevices();
    int getMaxDevices();
    Device *getDevice(int index);
    int addDevice(Device *device);
    bool removeDevice(Device *device);
    Device *removeDeviceByIndex(int index);
    char * quantityName(int id);

private:
    Device *devices[SENSOR_MONITOR_MAX_DEVICES];
    int totalDevices;

};


#endif //SENSOR_MONITOR_MONITOR_H
