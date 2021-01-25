/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   OfflineAusleihe.cpp
 * Author: chabi
 * 
 * Created on 3. Dezember 2019, 11:05
 */

#include "OfflineAusleihe.h"
#include <iostream>

OfflineAusleihe::OfflineAusleihe() {
}

void OfflineAusleihe::ausleihen(Artikel artikel) {
    artikel.ausleihen();// Methode der Klasse Artikel aus Aufgabe 1
    cout <<"Offline mit Ausweis: " <<this->ausweisDaten << endl;
    
    }


void OfflineAusleihe::zurueckgeben(Artikel) {

}

