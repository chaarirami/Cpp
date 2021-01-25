/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   HumidFSM.cpp
 * Author: chabi
 * 
 * Created on 13. Januar 2020, 12:58
 */

#include "HumidFSM.h"

#define MIN 10
#define MAX 20

HumidFSM::HumidFSM() {
    theState = IDLE;
}

HumidFSM::HumidFSM(Humidifier theHumidifier) {
    this->theHumidifier = theHumidifier;
}

HumidFSM::~HumidFSM() {
}

void HumidFSM::evaluate(int current_humidity) {
    
    switch(theState){
        
        case IDLE:
            if(current_humidity < MIN){
                 theState = BEFEUCHTEN;
                 theHumidifier.befeuchten();
            }
            if(MIN <= current_humidity  && current_humidity <= MAX){
                theState = NORMALBETRIB;
                theHumidifier.normalbetrieb();
            }
            if(current_humidity > MAX) {
                theState = ENTFEUCHTEN;
                theHumidifier.entfeuchen();
            }
            
            break;
            
        case NORMALBETRIB:
            if(current_humidity < MIN){
                theState = BEFEUCHTEN;
                theHumidifier.befeuchten();
            }
            if(current_humidity > MAX) {
                theState = ENTFEUCHTEN;
                theHumidifier.entfeuchen();

            }
           if(MIN <= current_humidity  && current_humidity <= MAX){
                theHumidifier.normalbetrieb();
            }
            break;
            
        case BEFEUCHTEN:
            if(MIN <= current_humidity  && current_humidity <= MAX){
                theState = NORMALBETRIB;
                theHumidifier.normalbetrieb();
            }
            if(current_humidity < MIN){
                theHumidifier.befeuchten();
            }
            break;
        
        case ENTFEUCHTEN:
            if(MIN <= current_humidity  && current_humidity <= MAX){
                theState = NORMALBETRIB;
                theHumidifier.normalbetrieb();
            }
            if(current_humidity > MAX) {
                theHumidifier.entfeuchen();
            }
            
            break;
    }
}

int HumidFSM::getState() {
    
    return theState;

}

