/*
 * 
 * 
 * 
 */

/* 
 * File:   main.cpp
 * Author: Rami Chaari
 *
 * Created on 8. Oktober 2019, 11:03
 */

#include <cstdlib>
#include "TemperaturSensor.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    TemperaturSensor sensor;
    double temperatureC = sensor.messen();
    double temperatureK = sensor.convertC2K(temperatureC);
    return 0;
}

