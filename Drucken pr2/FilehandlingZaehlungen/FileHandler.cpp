/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FileHandler.cpp
 * Author: chabi
 * 
 * Created on 16. November 2019, 15:28
 */

#include "FileHandler.h"
#include <cstdlib>
#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

FileHandler::FileHandler() {
}

void FileHandler::writetoFile(const char* name) {
    srand(time(NULL));
    int rand();
    FILE *pFile = NULL;
    pFile = fopen(name, "w");
    if(pFile != NULL){
        for(int i = 0;  i != 10; i++){
            randomNumber = rand() % 10 ;
            fprintf(pFile,"%d,", randomNumber);
        }
        fclose(pFile);
    }
}

void FileHandler::readfromFile(const char* name) {
     FILE *exampleFile = NULL;
    exampleFile = fopen(name, "r");
    int u = 0;
    int a = 0;
    if(exampleFile != NULL) {  // Abfangen, dass die File vorher existiert.
        while (!feof(exampleFile) && u <= 9) {// Bis Ende der Datei lesen.
            fscanf(exampleFile, "%d, ", &a); // Sucht nach ";" Zeichen und speichert die Eintraege in eine Array ab.
            dataList.push_back(a);
            printf("%d: %d \n", u, dataList[u]);   // Ausgabe auf Konsole zur Kontrolle
            u++;
        }
        fclose(exampleFile);   // Datei schliessen. 
    }
}

void FileHandler::search(int a) {
    int s = 0;
        for(i = dataList.begin(); i != dataList.end(); i++){
        if(*i == a){
            s++;
            }
    }
    printf("Die Zahl %d kommt in der Datei genau %d mal vor \n", a , s);
    
}

void FileHandler::readandwritetoFile(const char* zaehlungen) {
    FILE *pFile = NULL;
    int null = 0;
    int eins = 0;
    int zwei = 0;
    int drei = 0;
    int vier = 0;
    int fuenf= 0;
    int sechs = 0;
    int sieben = 0;
    int acht = 0;
    int neun = 0;
    pFile = fopen(zaehlungen, "w");
    if(pFile != NULL){
        for(i = dataList.begin();  i != dataList.end(); i++){
                if(*i == 0){
                     null++;
                }
                if(*i == 1){
                    eins++;
                }
                if(*i == 2){
                    zwei++;
                }
                if(*i == 3){
                    drei++;
                }
                if(*i == 4){
                    vier++;
                }
                if(*i == 5){
                    fuenf++;
                }
                if(*i == 6){
                    sechs++;
                }
                if(*i == 7){
                    sieben++;
                }
                if(*i == 8){
                    acht++;
                }
                if(*i == 9){
                    neun++;
                }
            } 
           fprintf(pFile," %d mal 0 \n", null);
           fprintf(pFile," %d mal 1 \n", eins);
           fprintf(pFile," %d mal 2 \n", zwei);
           fprintf(pFile," %d mal 3 \n", drei);
           fprintf(pFile," %d mal 4 \n", vier);
           fprintf(pFile," %d mal 5 \n", fuenf);
           fprintf(pFile," %d mal 6 \n", sechs);
           fprintf(pFile," %d mal 7 \n", sieben);
           fprintf(pFile," %d mal 8 \n", acht);
           fprintf(pFile," %d mal 9 \n", neun);
        }
        fclose(pFile);
    
        
}

void FileHandler::writetoPrsort(const char* name) {
    srand(time(NULL));
    int rand();
    FILE *pFile = NULL;
    pFile = fopen(name, "w");
    if(pFile != NULL){
        for(int i = 0;  i != 100; i++){
            randomNumber = rand() % 100 ;
            fprintf(pFile,"%d, \n", randomNumber);
        }
        fclose(pFile);
    }
        
}

void FileHandler::bubbleSort(const char* name) {
    FILE *exampleFile = NULL;
    exampleFile = fopen(name, "r");
    int u = 0;
    int a = 0;
    if(exampleFile != NULL) {  // Abfangen, dass die File vorher existiert.
        while (!feof(exampleFile) && u <= 99) {// Bis Ende der Datei lesen.
            fscanf(exampleFile, "%d, ", &a); // Sucht nach ";" Zeichen und speichert die Eintraege in eine Array ab.
            sortList.push_back(a);
            //printf("%d: %d \n", u, sortList[u]);   // Ausgabe auf Konsole zur Kontrolle
            u++;
        }
        fclose(exampleFile);   // Datei schliessen. 
    }
    
   int i, j,tmp;

   for (i = 1; i < 101 ; i++) //Bubble Sort
   {
      for (j = 0; j < 101 - i ; j++) 
      {
          if (sortList[j] > sortList[j+1]) 
          {
              tmp = sortList[j];
              sortList[j] = sortList[j+1];
              sortList[j+1] = tmp;
          }
      }
   }
}

void FileHandler::writebubblesort(const char* name) {
    FILE *pFile = NULL;
    pFile = fopen(name, "w");
    if(pFile != NULL){
        for(int z = 0; z<=99; z++){
            fprintf(pFile,"%d, \n",sortList[z]);
        }
        fclose(pFile);
    }
}

