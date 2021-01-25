/* 
 * File:   Humidifier.h
 * Author: Rami Chaari
 *
 * Created on 7. Januar 2020, 10:36
 */

#include <iostream>
#ifndef HUMIDIFIER_H
#define HUMIDIFIER_H

class Humidifier {
private:
    bool motor_on;
    bool window_closed;
public:
    Humidifier();
    ~Humidifier();
    Humidifier(bool, bool);
    bool getMotorStatus();
    void befeuchten();
    void entfeuchten();
    void normalbetrieb();
};


#endif /* HUMIDIFIER_H */

