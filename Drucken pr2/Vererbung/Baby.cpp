/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Baby.cpp
 * Author: dai
 * 
 * Created on 17. Dezember 2019, 08:52
 */

#include "Baby.h"

Baby::Baby() {
    printf("Baby ist geboren \n");
}

Baby::Baby(string name, float alter) : Person(name, alter) {
    printf("Baby ist geboren \n");
}


Baby::~Baby() {
    printf("Baby ist tod \n");
}

bool Baby::krabbeln() {
    
    return false;

}

void Baby::weinen() {

}


