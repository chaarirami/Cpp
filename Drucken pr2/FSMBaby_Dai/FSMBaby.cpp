/* 
 * File:   FSMBaby.cpp
 * Author: dai
 * 
 * Created on 22. Oktober 2019, 10:31
 */

#include "FSMBaby.h"
#include "Baby.h"

FSMBaby::FSMBaby() {
}

FSMBaby::FSMBaby(Baby baby, ZUSTAND zustand) {
    this->theBaby = baby;  
    this->actualState = zustand;
}

FSMBaby::~FSMBaby() {
}


// Evaluierungsmethode um die Logik der FSM zu triggern:
void FSMBaby::evalFSMBaby(string command) {
    
    cout << "Anfangszustand des Kinds ist: " << actualState << endl;
    
    // Zustandsübergänge innerhalb von FSM (nach der Modellierung in der Vorlesung):
    switch (this->actualState) {
        case W:
            // input trinken und gehe in Zustand T
            if (command == "trinken") {
                theBaby.trinken();
                actualState = T; // = 2
            } else {
                cout << "geht leider nicht!" << endl;
            }
            break;
        case S:
            // input weinen und gehe in Zustand W
            if (command == "weinen") {
                theBaby.weinen();
                actualState = W; // = 1
            } else {
                cout << "geht leider nicht!" << endl;
            }
            break;
        case T:
            // input schlafen und gehe in Zustand S
            if (command == "schlafen") {
                theBaby.schlafen(3); // 3 h schlafen
                actualState = S; // = 0
            } else {
                cout << "geht leider nicht!" << endl;
            }
            break;
        default:
            cout << "geht nicht" << endl;
    }
    
    cout << "neuer Zustand ist: " << actualState << endl << endl; 
}
