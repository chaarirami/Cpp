/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: chabi
 *
 * Created on 11. November 2019, 18:53
 */

#include <cstdlib>
#include <iostream>
#include <math.h>
#include <vector>
#include "DataManagement.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    const char* name = "Quadrate.cvs";
    DataManagement myData;
    myData.writetoFile(name);
    myData.readfromFile(name);
    
    return 0;
}