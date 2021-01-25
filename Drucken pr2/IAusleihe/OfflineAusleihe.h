/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   OfflineAusleihe.h
 * Author: chabi
 *
 * Created on 3. Dezember 2019, 11:05
 */

#ifndef OFFLINEAUSLEIHE_H
#define OFFLINEAUSLEIHE_H

#include <string>
#include "IAusleihe.h"
#include "Artikel.h"

using namespace std;

class OfflineAusleihe : public IAusleihe {
public:
    OfflineAusleihe();
    void ausleihen(Artikel) override;
    void zurueckgeben(Artikel) override;

private:
    long long ausweisDaten;
    Artikel artikel;

};

#endif /* OFFLINEAUSLEIHE_H */

