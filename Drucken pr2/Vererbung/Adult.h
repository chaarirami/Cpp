/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Adult.h
 * Author: dai
 *
 * Created on 17. Dezember 2019, 08:56
 */

#ifndef ADULT_H
#define ADULT_H
#include "Person.h"

using namespace std;

class Adult : public Person {
public:
    Adult();
    Adult(bool geschlecht);
    virtual ~Adult();
    void essen();
    void arbeiten(int dauer);
    
private:
    string adresse;
    bool geschlecht;

};

#endif /* ADULT_H */

