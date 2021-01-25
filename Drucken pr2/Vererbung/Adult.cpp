/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Adult.cpp
 * Author: dai
 * 
 * Created on 17. Dezember 2019, 08:56
 */

#include "Adult.h"

Adult::Adult() {
}

Adult::Adult(bool geschlecht) {
    
}

Adult::~Adult() {
    printf("Adult ist gestorben \n");
}

void Adult::arbeiten(int dauer) {
    if(this->geschlecht == true){
    printf("mein geschlecht ist: Männlich \n");
    }
          else{
             printf("mein geschlecht ist: Weiblich \n");
                
            }

}

void Adult::essen() {

}


