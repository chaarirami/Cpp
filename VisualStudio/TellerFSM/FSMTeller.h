

/* 
 * File:   FSMTeller.h
 * Author: Rami Chaari
 *
 * Created on 29. Oktober 2019, 09:34
 */

#ifndef FSMTELLER_H
#define FSMTELLER_H
#include "teller.h"
#include <string>

enum State {Voll, Leer, Gefuellt};

class FSMTeller {
public:
    Teller theTeller;
    State theState;
    FSMTeller(Teller);
    ~FSMTeller();
    void evaluateState(string command);
    string evaluateInput();
    State getState(); //für das testen
};

#endif /* FSMTELLER_H */

