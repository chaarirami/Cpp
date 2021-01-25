/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Artikel.cpp
 * Author: chabi
 * 
 * Created on 3. Dezember 2019, 10:50
 */

#include "Artikel.h"


Artikel::Artikel() {
    Name="Harry Potter";
    Status=false ;
}

Artikel::Artikel(string Name, bool Status) {
    this->Name = Name;
    this->Status = Status; 
}




Artikel::~Artikel() {
}

void Artikel::ausleihen() {
    Status = true;
    printf("%s wurde ausgeliehen", Name);
}

bool Artikel::getStatus()const {
    
    return Status;
}

void Artikel::setStatus(bool) {
    
}

bool Artikel::zurueckgeben() {

}

