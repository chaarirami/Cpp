/* 
 * File:   FSMBaby.h
 * Author: dai
 *
 * Created on 22. Oktober 2019, 10:31
 */

#include <iostream>
#include "Baby.h"
using namespace std;

#ifndef FSMBABY_H
#define FSMBABY_H

enum ZUSTAND {S, W, T};     // Definition der Zustände fuer FSM

class FSMBaby {
public:
    FSMBaby();
    FSMBaby(Baby, ZUSTAND);  
    virtual ~FSMBaby();
    
    void printState(int);
    void evalFSMBaby(string);
    
private:
    Baby theBaby;           // Kontext Klasse Baby als Attribut der FSM Klasse
    ZUSTAND actualState;    // Zustände der FSM
};

#endif /* FSMBABY_H */

