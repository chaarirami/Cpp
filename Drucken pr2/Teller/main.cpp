/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: chabi
 *
 * Created on 28. Oktober 2019, 21:34
 */

#include <cstdlib>
#include <iostream>

#include "Teller.h"
#include "FSMTeller.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
//    //Manuelles Testen
    Teller t(10);
//    t.put();
//     t.getPanckakeNum();
   
//
//    for (int i = 0; i < 20; i++) {
//        t.put();
//    }
//    t.getPanckakeNum();
    
    
    
        FSMTeller myFSM;
    
        string command; 

           while (true) {          // Immerwieder nachfragen, was Baby machen soll.
                  cout << "\n Geben sie put oder remove ein: " << endl;
                  cin >> command;
              myFSM.evalStates(command);   // Evaluierungslogik der FSM in der Schleife aufrufen.  
            }    

    return 0;
}

