#ifndef SENSOR_MONITOR_MONITOR_UNITS_H
#define SENSOR_MONITOR_MONITOR_UNITS_H

#include <avr/pgmspace.h>
#define TEMPERATURE 0
#define HUMIDITY 1
#define ILLUMINANCE 2
#define PRESSURE 3
#define VOLTAGE 4
#define CURRENT 5

const char string_0[] PROGMEM = "temperature";   // "String 0" etc are strings to store - change to suit.
const char string_1[] PROGMEM = "humidity";
const char string_2[] PROGMEM = "illuminance";
const char string_3[] PROGMEM = "pressure";
const char string_4[] PROGMEM = "voltage";
const char string_5[] PROGMEM = "current";

const char* const quantities_table[] PROGMEM = {string_0, string_1, string_2, string_3, string_4, string_5};

#endif //SENSOR_MONITOR_MONITOR_UNITS_H
