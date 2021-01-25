/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FSMTeller.h
 * Author: chabi
 *
 * Created on 5. November 2019, 10:43
 */

#include "Teller.h"

using namespace std;

#ifndef FSMTELLER_H
#define FSMTELLER_H
enum STATES { 
    LEER,
    GEFUELLT,
    VOLL,
};

class FSMTeller {
public:
    FSMTeller();
    FSMTeller(Teller);
    virtual ~FSMTeller();
    void evalStates(string);
    int getState();
    
    
private:
    STATES currentState;
    Teller theTeller;
    
};

#endif /* FSMTELLER_H */

