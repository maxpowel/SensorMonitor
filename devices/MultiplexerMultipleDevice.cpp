//
// Created by alvaro on 8/08/15.
//

#include "MultiplexerMultipleDevice.h"
#include "quantities.h"

MultiplexerMultipleDevice::MultiplexerMultipleDevice(Multiplexer *multiplexer, MultipleValueDevice *device, int address){
    multiplexer_ = multiplexer;
    address_ = address;
    device_ = device;

    sprintf(name_, "multiplexer@%d:%s", address_, device_->getName());
}

const char * MultiplexerMultipleDevice::getName(){
    return name_;
}

const char * MultiplexerMultipleDevice::getSensorType(){
    return "MULTIPLEXER";
}

const int MultiplexerMultipleDevice::getSensorQuantities(int quantities[]){
    return device_->getSensorQuantities(quantities);
}

int MultiplexerMultipleDevice::getValues(float *values){
    multiplexer_->setAddress(address_);
    return device_->getValues(values);
}

int MultiplexerMultipleDevice::totalValues() {
    return device_->totalValues();
}