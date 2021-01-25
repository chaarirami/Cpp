#include "Humidifier.h"

using namespace std;

Humidifier::Humidifier(bool motor_on, bool window_closed) {
    this->motor_on = motor_on;
    this->window_closed = window_closed;
}

Humidifier::Humidifier() {
    motor_on = false;
    window_closed = true;
}

void Humidifier::befeuchten() {
    window_closed = true;
    motor_on = true;
    cout << "Raum wird befeuchtet" << endl;
}

void Humidifier::entfeuchten() {
    motor_on = false;
    window_closed = false;
}

void Humidifier::normalbetrieb() {
    motor_on = false;
    window_closed = true;
}

bool Humidifier::getMotorStatus() {
    return motor_on;
}