/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FSMTeller.cpp
 * Author: chabi
 * 
 * Created on 5. November 2019, 10:43
 */

#include "FSMTeller.h"
#include <iostream>
#include <stdlib.h>

#define SIFR 0
#define ZEHN 10



using namespace std;



FSMTeller::FSMTeller() {
    cout << "\n bin da" << endl;
    currentState = LEER;
}

FSMTeller::FSMTeller(Teller theTeller) {
    this->theTeller = theTeller;
        
}



FSMTeller::~FSMTeller() {
}

void FSMTeller::evalStates(string command){
    
    int now = 0;
    printf("\n Aktueller Zustand ist : %d", currentState);
    
    
    switch(currentState){
        case LEER:
            if(command == "put"){
                theTeller.put();
                theTeller.getPanckakeNum();
                currentState = GEFUELLT;
            }
            
            
            if (command == "remove"){
                theTeller.remove();
                theTeller.getPanckakeNum();
            }
            
            if(command != "put" && command != "remove"){
                printf("\n Lernen Sie Schreiben!!");
            }
            
            break;
        case GEFUELLT:
            if(command == "put"){
                theTeller.put();
                now = theTeller.getPanckakeNum();
                if(now == ZEHN){
                    currentState = VOLL;
                }
            }
            
            if (command == "remove"){
                theTeller.remove();
                theTeller.getPanckakeNum();
                printf("\n Aktueller Zustand ist : %d", currentState);
                if(theTeller.getPanckakeNum() == SIFR){
                    printf("\n Aktueller Zustand ist : %d", currentState);
                    currentState = LEER;
                }
            }
            
            if(command != "put" && command != "remove"){
                printf("\n Lernen Sie Schreiben!!");
            }
            
            break;
        
        case VOLL:
            printf("\n Aktueller Zustand ist : %d", currentState);
            if(command == "put"){
                theTeller.put();
                theTeller.getPanckakeNum();
            }
            if(command == "remove"){
                theTeller.remove();
                theTeller.getPanckakeNum();
                if(theTeller.getPanckakeNum() < ZEHN) {
                    currentState = GEFUELLT;
                    printf("\n Aktueller Zustand ist : %d", LEER);
                }
            }
            
            if(command != "put" && command != "remove"){
                printf("\n Lernen Sie Schreiben!!");
            }
            
            break;
            
            }
    
     printf("\n Neuer Zustand ist : %d", currentState);
    
    
         
}

int FSMTeller::getState() {
    return (int) currentState;
}



