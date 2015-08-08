//
// Created by alvaro on 8/08/15.
//

#include "DallasTemperatureDevice.h"

DallasTemperatureDevice::DallasTemperatureDevice(DallasTemperature *sensors, DeviceAddress address){
    // The device name is just the address
    sprintf(name_, "%02x%02x%02x%02x%02x%02x%02x%02x",address[0], address[1], address[2], address[3], address[4], address[5], address[6],address[7]);
    sensors_ = sensors;
    for(int i = 0; i < 8; i++){
        address_[i] = address[i];
    }
    sensors->setResolution(address, 12);
}

const char * DallasTemperatureDevice::getName(){
    return name_;
}

float DallasTemperatureDevice::getValue() {
    //Se podría hacer un requestTemperatures global
    sensors_->requestTemperaturesByAddress(address_);
    return sensors_->getTempC(address_);
}