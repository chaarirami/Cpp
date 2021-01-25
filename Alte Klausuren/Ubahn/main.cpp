/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rami Chaari
 *
 * Created on 27. Januar 2020, 10:35
 */

#include <cstdlib>
#include "UBahn.h"
#include "IZug.h"
#include "Person.h"

using namespace std;


int main(int argc, char** argv) {
    UBahn ubahn;
    ubahn.arrive();
    Person person;
    IZug *zug;
    zug = &ubahn;
    //person.enterTrain(zug);
    person.leaveTrain();
    
    return 0;
}

