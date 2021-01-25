/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DataManagement.cpp
 * Author: chabi
 * 
 * Created on 11. November 2019, 18:57
 */
#include <cstdlib>
#include <iostream>
#include <math.h>
#include <vector>
#include "DataManagement.h"



DataManagement::DataManagement() {

}

void DataManagement::writetoFile(const char* name) {
    int x = 0;
    for(int i = 0; i <=MAX ; i++){
            x = x*2;
            dataList.push_back(x);
            if(x == NULL){
                x++;
            }
        }
    FILE *pFile = NULL;
    pFile = fopen(name, "w");
    if(pFile != NULL){
        for(i = dataList.begin();  i != dataList.end(); i++){
            fprintf(pFile,"%d,", *i);
        }
        fclose(pFile);
    }

}

void DataManagement::readfromFile(const char* name) {
         // Auslesen einer Datei. Inhalt in einen Array abspeichern.
    FILE *exampleFile = NULL;
    exampleFile = fopen(name, "r"); // Datei oeffnen zu lesen. Modus "r" für readable.
    int myArray[MAX] = {0};
    int i = 0;
    if (exampleFile != NULL) {  // Abfangen, dass die File vorher existiert.
        while (!feof(exampleFile) && i <= MAX) {   // Bis Ende der Datei lesen.
            fscanf(exampleFile, "%d, ", &myArray[i]); // Sucht nach ";" Zeichen und speichert die Eintraege in eine Array ab.
            printf("%d: %d \n", i, myArray[i]);   // Ausgabe auf Konsole zur Kontrolle
            i++;
        }
        fclose(exampleFile);   // Datei schliessen. 
    }
}
