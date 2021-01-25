/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Person.cpp
 * Author: dai
 * 
 * Created on 17. Dezember 2019, 08:47
 */

#include "Person.h"

Person::Person() {
    printf(" Person ist geboren \n");
}

Person::Person(string name, float alter) {
        printf("mein name ist: %s \n", name.c_str());
        printf("mein alter ist: %.2f \n", alter);
}


Person::~Person() {
    printf("Person ist tod \n");
}




void Person::schlafen(int dauer) {
    printf("Ich schlafe jetzt %d stunden \n", dauer);

}

bool Person::trinken() {
    
    return false;
}
