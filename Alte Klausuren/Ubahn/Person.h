/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Person.h
 * Author: Rami Chaari
 *
 * Created on 27. Januar 2020, 11:38
 */

#ifndef PERSON_H
#define PERSON_H

#include "IZug.h"

class Person {
public:
    Person();
    void enterTrain(IZug* zug);
    void leaveTrain();
private:
    IZug* zug;
};

#endif /* PERSON_H */

