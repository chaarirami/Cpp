/* 
 * File:   FSMBaby.cpp
 * Author: dai
 *
 * Created on 22. Oktober 2019, 10:31
 */

#include <stdio.h>
#include <iostream>

#include "Baby.h"   

Baby::Baby(){
}

Baby::Baby(string name, float newAlter) {
    this->name = name;  
    alter = newAlter;   
}

Baby::~Baby() {
}

void Baby::schlafen(int dauer) {
    cout << "ok, ich schlafe. " << endl;
}

void Baby::trinken() {
    cout << "ok, ich trinke. " << endl;
}

void Baby::weinen() {
    cout << "ok, ich weine. " << endl;
}


