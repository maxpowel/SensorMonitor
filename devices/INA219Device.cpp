//
// Created by alvaro on 8/08/15.
//

#include "INA219Device.h"
#include "quantities.h"

INA219Device::INA219Device(){
    sensor_ = new Adafruit_INA219();
    sensor_->begin();
}

const char * INA219Device::getName(){
    return "ina219";
}

const char * INA219Device::getSensorType(){
    return "INA219";
}

int INA219Device::getValues(float *values){

    values[0] = sensor_->getShuntVoltage_mV();
    values[1] = sensor_->getBusVoltage_V();
    values[2] = sensor_->getCurrent_mA();

    return 3;
}

const int INA219Device::getSensorQuantities(int quantities[]){
    quantities[0] = VOLTAGE;
    quantities[1] = VOLTAGE;
    quantities[2] = CURRENT;
    return 3;
}

int INA219Device::totalValues() {
    return 3;
}