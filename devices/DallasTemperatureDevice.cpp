//
// Created by alvaro on 8/08/15.
//

#include "DallasTemperatureDevice.h"
#include "quantities.h"
#define SENSOR_ONE_WIRE_BUS 3
#include <OneWire.h>


// OneWire* DallasTemperatureDevice::oneWire = new OneWire(3);


//DallasTemperature* DallasTemperatureDevice::sensors = NULL;
//int DallasTemperatureDevice::cosa = 0;

DallasTemperature* DallasTemperatureDevice::sensors = NULL;

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

char * DallasTemperatureDevice::getSensorType(){
    return "DS18B20";
}

const int DallasTemperatureDevice::getSensorQuantities(int quantities[]){
    quantities[0] = TEMPERATURE;
    return 1;
}

float DallasTemperatureDevice::getValue() {
    //Se podría hacer un requestTemperatures global
    sensors_->requestTemperaturesByAddress(address_);
    return sensors_->getTempC(address_);
}

Device * DallasTemperatureDevice::fromConfig(void *data){
  DeviceAddress *address = (DeviceAddress *)data;
  if(sensors == NULL) {
    OneWire *o = new OneWire(SENSOR_ONE_WIRE_BUS);
    sensors = new DallasTemperature(o);
    sensors->begin();
  }

  DallasTemperatureDevice *d = new DallasTemperatureDevice(sensors, *address);
  return (Device *)d;

}
