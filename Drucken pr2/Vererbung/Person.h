/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Person.h
 * Author: dai
 *
 * Created on 17. Dezember 2019, 08:47
 */

#ifndef PERSON_H
#define PERSON_H
#include <stdlib.h>
#include <stdio.h>
#include <string>

using namespace std;

class Person {
public:
    Person();
    Person(string name, float alter);
    bool trinken();
    void schlafen(int dauer);
    virtual ~Person();
    
protected:
    string name;
    float alter;

private:
    bool geschlecht;
    

};

#endif /* PERSON_H */

