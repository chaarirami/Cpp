/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   OnlineAusleihe.h
 * Author: chabi
 *
 * Created on 3. Dezember 2019, 10:55
 */

#ifndef ONLINEAUSLEIHE_H
#define ONLINEAUSLEIHE_H

#include "IAusleihe.h"
#include <string>

using namespace std;


class OnlineAusleihe : public IAusleihe {
public:
    OnlineAusleihe();
   
    virtual ~OnlineAusleihe();
    virtual void zurueckgeben(Artikel);
    virtual void ausleihen(Artikel);
private:
    string UserName;
    int PIN;
    Artikel artikel;
};

#endif /* ONLINEAUSLEIHE_H */

