//
// Created by alvaro on 8/08/15.
//

#include "BH1750Device.h"
#include "quantities.h"


BH1750Device::BH1750Device(){
    sensor_ = new BH1750();
    sensor_->begin();
}

const char * BH1750Device::getName(){
    return "BH1750";
}

const char * BH1750Device::getSensorType(){
    return "BH1750";
}

const int BH1750Device::getSensorQuantities(int quantities[]){
    quantities[0] = ILLUMINANCE;
    return 1;
}

float BH1750Device::getValue() {
    unsigned int light = sensor_->readLightLevel();
    return (float) light;
}

BH1750Device * BH1750Device::fromConfig(void *){
  return new BH1750Device();
}
