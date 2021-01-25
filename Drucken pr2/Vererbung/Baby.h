/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Baby.h
 * Author: dai
 *
 * Created on 17. Dezember 2019, 08:52
 */

#ifndef BABY_H
#define BABY_H
#include "Person.h"

using namespace std;

class Baby : public Person {
public:
    Baby();
    Baby(string name, float alter);
    virtual ~Baby();
    void weinen();
    bool krabbeln();
    
private:
  
};

#endif /* BABY_H */

