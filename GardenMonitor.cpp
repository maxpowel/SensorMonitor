//
// Created by alvaro on 26/07/15.
//

#include "GardenMonitor.h"

GardenMonitor::GardenMonitor(){
    totalDevices = 0;
}

int GardenMonitor::getTotalDevices() {
    return totalDevices;
}

int GardenMonitor::getMaxDevices() {
    return GARDEN_MONITOR_MAX_DEVICES;
}

Device* GardenMonitor::getDevice(int index){
    if(index < totalDevices){
        return devices[index];
    }else return 0;
}

int GardenMonitor::addDevice(Device *device) {
    if(totalDevices < GARDEN_MONITOR_MAX_DEVICES){
        devices[totalDevices] = device;
        totalDevices++;
        return totalDevices - 1;
    }else return -1;
}

bool GardenMonitor::removeDevice(Device *device){
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

Device* GardenMonitor::removeDeviceByIndex(int index) {
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

char * GardenMonitor::quantityName(int id) {
    return TEMP_MAP[id];
}
