/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FSMKind.cpp
 * Author: chabi
 * 
 * Created on 17. Januar 2020, 11:25
 */

#include "FSMKind.h"

FSMKind::FSMKind() {
    theState = NEUTRAL;
}


FSMKind::~FSMKind() {
}

void FSMKind::evaluate(string command) {
    
    
    switch(theState){
        case NEUTRAL:
            printf("\n Der Anfangszustand ist: %d \n ", theState);
            if(command == "kuessen"){
                printf("juhuuu");
                theState = FROEHLICH;
            }
            if(command == "veraergern"){
                printf("juhuuu");
                theState = BOCKIG;
            }
            if(command != "veraergern" && command != "kuessen" ){
                printf("\n lern schreiben");
            }
            break;
        
         case BOCKIG:
             printf("\n Der Anfangszustand ist: %d \n ", theState);
            if(command == "kuessen"){
                theState = NEUTRAL;
            }
            if(command != "kuessen" ){
                printf("\n lern schreiben");
            }
            break;
        
         case FROEHLICH:
             printf("\n Der Anfangszustand ist: %d \n ", theState);
            if(command == "unterhalten"){
                printf("\n juhuuu");
                theState = FROEHLICH;
            }
            if(command == "veraergern"){
                printf("\n grrr");
                theState = BOCKIG;
            }
            if(command != "veraergern" && command != "unterhalten" ){
                printf("\n lern schreiben");
            }
            break;
    }
    printf("\n Der neue Zustand ist : %d", theState);
}

int FSMKind::getState() {
    return (int) theState;
}
