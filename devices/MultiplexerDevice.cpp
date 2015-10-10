//
// Created by alvaro on 8/08/15.
//

#include "MultiplexerDevice.h"
#include "quantities.h"

MultiplexerDevice::MultiplexerDevice(Multiplexer *multiplexer, SingleValueDevice *device, int address){
    multiplexer_ = multiplexer;
    address_ = address;
    device_ = device;

    sprintf(name_, "multiplexer@%d:%s", address_, device_->getName());
}

const char * MultiplexerDevice::getName(){
    return name_;
}

const char * MultiplexerDevice::getSensorType(){
    return "MULTIPLEXER";
}

const int MultiplexerDevice::getSensorQuantities(int quantities[]){
    return device_->getSensorQuantities(quantities);
}

float MultiplexerDevice::getValue(){
    multiplexer_->setAddress(address_);
    return device_->getValue();
}
