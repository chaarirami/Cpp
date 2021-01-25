/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FileHandler.cpp
 * Author: chabi
 * 
 * Created on 13. Januar 2020, 19:24
 */

#include "FileHandler.h"

FileHandler::FileHandler() {
}

FileHandler::~FileHandler() {
}

void FileHandler::writeFile(FILE* testFile) {
    const char* name = "TestDaten.txt";
    this->testFile = testFile;
    testFile = NULL;
    testFile = fopen(name, "w");
    if(testFile != NULL){
        for(int i = 0;  i != 25; i++){
            
            fprintf(testFile,"%d,", i);
        }
        fclose(testFile);
    }
    
}

int FileHandler::readFile(FILE* testFile) {
    const char* name = "TestDaten.txt";
    this->testFile = testFile;
    int number = 0;
    int u = 0;
    testFile = NULL;
    testFile = fopen(name, "r");
    if(testFile != NULL) {  // Abfangen, dass die File vorher existiert.
        while (!feof(testFile) && u <= 9) {// Bis Ende der Datei lesen.
            fscanf(testFile, "%d,", &number); // Sucht nach ";" Zeichen und speichert die Eintraege in eine Array ab.
            printf("%d \n", number);   // Ausgabe auf Konsole zur Kontrolle
            u++;
        }
        fclose(testFile);   // Datei schliessen. 
    }
    return number;

}





