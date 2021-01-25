/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   HumidFSM.h
 * Author: chabi
 *
 * Created on 13. Januar 2020, 12:58
 */

#ifndef HUMIDFSM_H
#define HUMIDFSM_H
#include <stdio.h>

#include "Humidifier.h"
#include "IDispatcher.h"

using namespace std;

enum States {
    IDLE,
    BEFEUCHTEN,
    NORMALBETRIB,
    ENTFEUCHTEN
};

class HumidFSM : public IDispatcher {
public:
    HumidFSM();
    HumidFSM(Humidifier);
    virtual ~HumidFSM();
    int getState();
    virtual void evaluate(int current_humidity);
private:
    States theState;
    Humidifier theHumidifier;
    int temperatur;
};

#endif /* HUMIDFSM_H */

