//
// Created by alvaro on 26/07/15.
//

#ifndef GARDEN_MONITOR_MONITOR_H
#define GARDEN_MONITOR_MONITOR_H



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


#define GARDEN_MONITOR_MAX_DEVICES 32


class GardenMonitor {
public:
    GardenMonitor();
    int getTotalDevices();
    int getMaxDevices();
    Device *getDevice(int index);
    int addDevice(Device *device);
    bool removeDevice(Device *device);
    Device *removeDeviceByIndex(int index);
    char * quantityName(int id);

private:
    Device *devices[GARDEN_MONITOR_MAX_DEVICES];
    int totalDevices;

};


#endif //GARDEN_MONITOR_MONITOR_H
