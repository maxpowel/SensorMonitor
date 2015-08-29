//
// Created by alvaro on 8/08/15.
//

#include "DummyMultipleDevice.h"
#include "quantities.h"

const char * DummyMultipleDevice::getName(){
    return "dummyMultiple";
}

int DummyMultipleDevice::getValues(float *values){
    values[0] = 1;
    values[1] = 2.3;
    values[2] = 4;
    return 3;
}

const char * DummyMultipleDevice::getSensorType(){
    return "dummyMultiple";
}

const int DummyMultipleDevice::getSensorQuantities(int quantities[]){
    quantities[0] = ILLUMINANCE;
    quantities[1] = TEMPERATURE;
    quantities[2] = CURRENT;
    return 3;
}

int DummyMultipleDevice::totalValues() {
    return 3;
}