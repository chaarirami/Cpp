/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   UBahn.h
 * Author: Rami Chaari
 *
 * Created on 27. Januar 2020, 10:40
 */

#ifndef UBAHN_H
#define UBAHN_H
#include "Uebung.h"
#include "IZug.h"

class UBahn: public IZug {
private:
    int line;
public:
    UBahn();
    ~UBahn();
    void drive();
    void stop();
    void arrive();
    void enter();
    void leave();
};

#endif /* UBAHN_H */

