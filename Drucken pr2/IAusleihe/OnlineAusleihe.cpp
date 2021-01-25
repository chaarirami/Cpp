/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   OnlineAusleihe.cpp
 * Author: chabi
 * 
 * Created on 3. Dezember 2019, 10:55
 */

#include "OnlineAusleihe.h"
#include "iostream"

OnlineAusleihe::OnlineAusleihe() {
    UserName = "Chabir";
}




OnlineAusleihe::~OnlineAusleihe() {
}

void OnlineAusleihe::ausleihen(Artikel) {
    artikel.ausleihen();// Methode der Klasse Artikel aus Aufgabe 1
    cout <<"Online vom User: " <<this->UserName << endl;
}

void OnlineAusleihe::zurueckgeben(Artikel) {

}

