//
// Created by alvaro on 8/08/15.
//

#include "DummyDevice.h"

const char * DummyDevice::getName(){
    return "dummy";
}

float DummyDevice::getValue() {
    return 3.14;
}