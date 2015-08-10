//
// Created by alvaro on 8/08/15.
//

#include "BMP180Device.h"

BMP180Device::BMP180Device(){
    sensor_ = new Adafruit_BMP085_Unified();
    sensor_->begin();
}

const char * BMP180Device::getName(){
    return "bmp180";
}

int BMP180Device::getValues(float *values){
    sensors_event_t event;
    sensor_->getEvent(&event);

    values[0] = event.pressure;
    float temperature;
    sensor_->getTemperature(&temperature);
    values[1] = temperature;

    return 2;
}

int BMP180Device::totalValues() {
    return 2;
}