
/* 
 * File:   TemperaturSensor.h
 * Author: Rami Chaari
 *
 * Created on 8. Oktober 2019, 11:04
 */

#ifndef TEMPERATURSENSOR_H
#define TEMPERATURSENSOR_H

class TemperaturSensor {
private:
    double wert;
public:
    double messen();
    double convertC2K(double celsius);
    TemperaturSensor();
    ~TemperaturSensor();
    
};

#endif /* TEMPERATURSENSOR_H */

