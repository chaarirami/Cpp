/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Humidifier.h
 * Author: chabi
 *
 * Created on 13. Januar 2020, 12:17
 */

#ifndef HUMIDIFIER_H
#define HUMIDIFIER_H
#include <cstdio>

using namespace std;

class Humidifier {
public:
    Humidifier();
    Humidifier(bool, bool);
    virtual ~Humidifier();
    bool getMotorStatus();
    void befeuchten();
    void entfeuchen();
    void normalbetrieb ();
    
private:
    bool motor_on;
    bool windows_closed;

};

#endif /* HUMIDIFIER_H */

