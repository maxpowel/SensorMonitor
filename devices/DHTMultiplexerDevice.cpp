//
// Created by alvaro on 8/08/15.
//

#include "DHTMultiplexerDevice.h"
#include "quantities.h"

DHTMultiplexerDevice::DHTMultiplexerDevice(Multiplexer *multiplexer, int address, int dhtType){
    multiplexer_ = multiplexer;
    address_ = address;
    sensor_ = new DHT_Unified(multiplexer_->getDataPin(), dhtType);
    sensor_->begin();
    sprintf(name_, "dht%d%d",multiplexer_->getDataPin(), address_);

}

const char * DHTMultiplexerDevice::getName(){
    return name_;
}

const char * DHTMultiplexerDevice::getSensorType(){
    return "DHT";
}

const int DHTMultiplexerDevice::getSensorQuantities(int quantities[]){
    quantities[0] = TEMPERATURE;
    quantities[1] = HUMIDITY;
    return 2;
}

int DHTMultiplexerDevice::getValues(float *values){
    multiplexer_->setAddress(address_);

    sensors_event_t event;
    sensor_->temperature().getEvent(&event);
    if (isnan(event.temperature)) {
        values[0] = -1;
    }
    else {
        values[0] = event.temperature;
    }
    // Get humidity event and print its value.
    sensor_->humidity().getEvent(&event);
    if (isnan(event.relative_humidity)) {
        values[1] = -1;
    }
    else {
        values[1] = event.relative_humidity;
    }

    return 2;
}

int DHTMultiplexerDevice::totalValues() {
    return 2;
}