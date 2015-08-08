//
// Created by alvaro on 8/08/15.
//

#include "DummyMultipleDevice.h"

const char * DummyMultipleDevice::getName(){
    return "dummyMultiple";
}

int DummyMultipleDevice::getValues(float *values){
    values[0] = 1;
    values[1] = 2.3;
    values[2] = 4;
    return 3;
}

int DummyMultipleDevice::totalValues() {
    return 3;
}