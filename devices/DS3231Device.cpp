//
// Created by alvaro on 31/10/16.
//

#include "DS3231Device.h"
#include "quantities.h"
DS3231Device::DS3231Device(){
  Rtc.Begin();
  if (!Rtc.GetIsRunning())
  {
      Rtc.SetIsRunning(true);
  }
}
const char * DS3231Device::getName(){
    return "DS3231";
}

const char * DS3231Device::getSensorType(){
    return "RTC";
}

const int DS3231Device::getSensorQuantities(int quantities[]){
    quantities[0] = TIME;
    quantities[1] = TIME;
    quantities[2] = TIME;
    quantities[3] = TIME;
    quantities[4] = TIME;
    quantities[5] = TIME;
    quantities[1] = TEMPERATURE;
    return 7;
}

int DS3231Device::getValues(float *values){
    RtcDateTime now = Rtc.GetDateTime();
    RtcTemperature temp = Rtc.GetTemperature();
    values[0] = now.Year();
    values[1] = now.Month();
    values[2] = now.Day();
    values[3] = now.Hour();
    values[4] = now.Minute();
    values[5] = now.Second();
    values[6] = temp.AsFloat();

    return 7;
}

int DS3231Device::totalValues() {
    return 7;
}

Device * DS3231Device::fromConfig(void *data){

  return NULL;
}
