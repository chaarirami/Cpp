/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: dai
 *
 * Created on 8. Oktober 2019, 11:10
 */

#include <stdio.h>
#include <cstdlib>
#include<iostream>
using namespace std;

#include "FSMBaby.h"        // FSM Header Datei nicht vergessen.

int main(int argc, char** argv) {
    Baby Kilian("Kilian", 3.0);  // Baby Kilian als Kontextobjekt erzeugen fuer die FSM.
    FSMBaby fsm(Kilian, W);      // Kreiieren des FSM-Objekts fuer Baby Kilian.
    
    // Evaluierungslogik in der FSM einzeln aufrufen:
    fsm.evalFSMBaby("trinken");     // Kilian in Zustand T=2
    fsm.evalFSMBaby("schlafen");    // Kilian in Zustand S=0
    fsm.evalFSMBaby("weinen");      // Kilian in Zustand W=1
    fsm.evalFSMBaby("schlafen");    // nach Weinen sollte Kilian trinken. 
                                    // Daher ist schlafen nicht zulässig.
    fsm.evalFSMBaby("weinen");      // immernoch nicht zulässig.
    fsm.evalFSMBaby("trinken");     // Kilian in Zustand S=0
        

    // Alternativ über eine While Schleife und Daten aus Konsole reinholen:
    string command;     
    while (true) {          // Immerwieder nachfragen, was Baby machen soll.
        cout << "Kommando für das Baby bitte eingeben: " << endl;
        cin >> command;
        //scanf("%s", &command);
        fsm.evalFSMBaby(command);   // Evaluierungslogik der FSM in der Schleife aufrufen.  
    }
    return 0;
}
