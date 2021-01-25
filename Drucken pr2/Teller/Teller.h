/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Teller.h
 * Author: Diablo
 *
 * Created on 22. Oktober 2019, 11:12
 */
#include <cstdlib>
#include <iostream>

#ifndef TELLER_H
#define TELLER_H

class Teller {
public:
    Teller();
    Teller(int);
//    Teller(const Teller& orig);
    virtual ~Teller();
    /*FCTS*/
    void put(); // adds 1
    void remove(); // removes 1
    int getPanckakeNum(void);
private:
    int pancakeNum  ; 
    int maxPancake ;
};

#endif /* TELLER_H */