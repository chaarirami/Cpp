/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Kunde.h
 * Author: chabi
 *
 * Created on 7. Dezember 2019, 15:37
 */

#ifndef KUNDE_H
#define KUNDE_H

#include "IAusleihe.h"
#include "Artikel.h"
#include "OfflineAusleihe.h"
#include "OnlineAusleihe.h"


class Kunde{
public:
    Kunde();
    void onlineOffline(Artikel);
    
private:
    IAusleihe *k = NULL;
    OfflineAusleihe oa;
    OnlineAusleihe on;
    
};

#endif /* KUNDE_H */

