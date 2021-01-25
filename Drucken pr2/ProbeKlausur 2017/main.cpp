/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: chabi
 *
 * Created on 13. Januar 2020, 12:16
 */

#include <cstdlib>
#include <stdio.h>
#include <iostream>
#include "Humidifier.h"
#include "HumidFSM.h"
#include "FileHandler.h"

using namespace std;

int main(int argc, char** argv) {
    Humidifier humid;
    FileHandler file;
    HumidFSM myFSM;
    IDispatcher *ptr = NULL;
    ptr = &myFSM;
    
    int current_humidity;
    
//    FILE *testFile = NULL;
//    
//    file.writeFile(testFile);
//    file.readFile(testFile);
    
    while(true){
        cout << "Geben Sie Ihre aktuelle Taumtemperatur an: " << endl;
        cin >> current_humidity;
        ptr->evaluate(current_humidity);
    }

    return 0;
}

