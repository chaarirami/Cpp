/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: dai
 *
 * Created on 17. Dezember 2019, 08:37
 */

#include <cstdlib>
#include "Person.h"
#include "Baby.h"
#include "Adult.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Baby bae("jeff", 2);
    bae.schlafen(5);
    Adult ahmed(false);
    
    
    return 0;
}

