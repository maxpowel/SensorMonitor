//
// Created by alvaro on 8/08/15.
//

#include "DummyDevice.h"
#include "quantities.h"

const char * DummyDevice::getName(){
    return "dummy";
}

const char * DummyDevice::getSensorType(){
    return "dummy";
}

const int DummyDevice::getSensorQuantities(int quantities[]){
    quantities[0] = TEMPERATURE;
    return 1;
}

float DummyDevice::getValue() {
    return 3.14;
}