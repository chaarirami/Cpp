/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Person.cpp
 * Author: Rami Chaari
 * 
 * Created on 27. Januar 2020, 11:38
 */

#include "Person.h"

Person::Person() {
}

void Person::enterTrain(IZug* zug){
    this->zug = zug; zug->enter();
}

void Person::leaveTrain(){
    zug->leave();
}


