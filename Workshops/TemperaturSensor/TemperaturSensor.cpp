
#include "TemperaturSensor.h"
#define TEMPERATURE 20
TemperaturSensor::TemperaturSensor(){
    
};

double TemperaturSensor::convertC2K(double celsius) {
    double kelvin = celsius + 273.15;
    return kelvin;
};

double TemperaturSensor::messen(){
    return TEMPERATURE;
};

TemperaturSensor::~TemperaturSensor(){
    
};