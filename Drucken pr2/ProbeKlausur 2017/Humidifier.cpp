/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Humidifier.cpp
 * Author: chabi
 * 
 * Created on 13. Januar 2020, 12:17
 */

#include "Humidifier.h"

Humidifier::Humidifier() {
    motor_on = false;
    windows_closed = true;
}

Humidifier::Humidifier(bool, bool) {
}

Humidifier::~Humidifier() {
}

void Humidifier::befeuchten() {
    motor_on = true;
    windows_closed = true;
    printf("Raum wird befeuchtet \n");

}

void Humidifier::entfeuchen() {
    windows_closed = false;
    motor_on = false;
     printf("Raum wird entfeuchtet \n");
}

void Humidifier::normalbetrieb() {
    windows_closed = true;
    motor_on = false;
    printf("Raum ist im Normalbetrieb \n ");

}

bool Humidifier::getMotorStatus() {
        
    return 0;
}
