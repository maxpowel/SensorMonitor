//
// Created by alvaro on 8/08/15.
//

#include "VoltmeterDevice.h"
#include "quantities.h"

VoltmeterDevice::VoltmeterDevice(int readPin, float r1, float r2, float referenceVoltage){
    vmeter_ = new VoltMeter(readPin, r1, r2, referenceVoltage);
}

const char * VoltmeterDevice::getName(){
    return "voltmeter";
}

const char * VoltmeterDevice::getSensorType(){
    return "voltmeter";
}

const int VoltmeterDevice::getSensorQuantities(int quantities[]){
    quantities[0] = VOLTAGE;
    return 1;
}

float VoltmeterDevice::getValue() {
    return vmeter_->getVoltage();
}