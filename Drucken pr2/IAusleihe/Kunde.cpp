/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Kunde.cpp
 * Author: chabi
 * 
 * Created on 7. Dezember 2019, 15:37
 */

#include "Kunde.h"
#include "OnlineAusleihe.h"
#include "OfflineAusleihe.h"

Kunde::Kunde(){
    
}

void Kunde::onlineOffline(Artikel artikel) {
    k = &on;
    k->ausleihen(artikel);
    k = &oa;
    k->ausleihen(artikel);
    
}

