/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   IAusleihe.h
 * Author: chabi
 *
 * Created on 3. Dezember 2019, 10:45
 */

#ifndef IAUSLEIHE_H
#define IAUSLEIHE_H

#include "Artikel.h"

class IAusleihe {
public:
    virtual ~IAusleihe(){};
    virtual void zurueckgeben(Artikel) = 0;
    virtual void ausleihen(Artikel) = 0;
};

#endif /* IAUSLEIHE_H */

