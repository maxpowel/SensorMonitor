//
// Created by alvaro on 26/07/15.
//

#include "SensorMonitor.h"

SensorMonitor::SensorMonitor(){
    totalDevices = 0;
}

int SensorMonitor::getTotalDevices() {
    return totalDevices;
}

int SensorMonitor::getMaxDevices() {
    return SENSOR_MONITOR_MAX_DEVICES;
}

Device* SensorMonitor::getDevice(int index){
    if(index < totalDevices){
        return devices[index];
    }else return 0;
}

int SensorMonitor::addDevice(Device *device) {
    if(totalDevices < SENSOR_MONITOR_MAX_DEVICES){
        devices[totalDevices] = device;
        totalDevices++;
        return totalDevices - 1;
    }else return -1;
}

bool SensorMonitor::removeDevice(Device *device){
    bool found = false;
    for(int i = 0; i < totalDevices; i++){
        if(found) {
            devices[i - 1] = devices[i];
        } else {
            found = devices[i] == device;
        }
    }

    if(found){
        totalDevices--;
    }

    return found;
}

Device* SensorMonitor::removeDeviceByIndex(int index) {
    if(index < totalDevices){
        Device* d = devices[index];
        for(int i = index; i < totalDevices; i++){
            devices[i] = devices[i] + 1;
        }
        totalDevices--;
        return d;
    }else return 0;
}

//TODO: duplicated information in quantities.h, should be synchronized
char TEMP_MAP[][20] = {"temperature", "humidity", "illuminance", "pressure", "voltage", "current"};

char * SensorMonitor::quantityName(int id) {
    return TEMP_MAP[id];
}
