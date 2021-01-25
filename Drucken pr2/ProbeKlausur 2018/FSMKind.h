/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FSMKind.h
 * Author: chabi
 *
 * Created on 17. Januar 2020, 11:25
 */

#ifndef FSMKIND_H
#define FSMKIND_H
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

enum States {
    NEUTRAL,
    FROEHLICH,
    BOCKIG
};

class FSMKind {
public:
    FSMKind();
    virtual ~FSMKind();
    void evaluate(string);
    int getState();
private:
    States theState;

};

#endif /* FSMKIND_H */

