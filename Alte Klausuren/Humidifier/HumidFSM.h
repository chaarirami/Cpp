
/* 
 * File:   HumidFSM.h
 * Author: Rami Chaari
 *
 * Created on 7. Januar 2020, 10:59
 */


#include "Humidifier.h"
#ifndef HUMIDFSM_H
#define HUMIDFSM_H
#define MIN 10
#define MAX 50

enum states {Idle, Normalbetrieb, Befeuchten, Entfeuchten};

class HumidFSM {
private:
    Humidifier theHumidifier;
    states theState;
public:
    HumidFSM();
    ~HumidFSM();
    int getState();
    void evaluate(int current_humidity);
};


#endif /* HUMIDFSM_H */

