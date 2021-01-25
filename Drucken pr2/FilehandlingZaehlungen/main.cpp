/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: chabi
 *
 * Created on 16. November 2019, 14:56
 */

#include <cstdlib>
#include <iostream>
#include <math.h> 
#include "FileHandler.h"
#include <vector>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv){
    const char* name = "RandomZahlen.cvs";
    const char* zaehlungen = "Zahlungen.txt";
    const char* pr2sort = "PR2_Sort.txt";
    const char* bubblesort = "PR2_BubbleSorted.txt";
    
  //Aufgabe Zaehlungen
    FileHandler myFile;
    myFile.writetoFile(name);
    myFile.readfromFile(name);
    myFile.search(6);
    myFile.readandwritetoFile(zaehlungen);
    
  //Sortieralghoritmene
    myFile.writetoPrsort(pr2sort);
    myFile.bubbleSort(pr2sort);
    myFile.writebubblesort(bubblesort);
    
       
//    printf("Die Zahl 4 kommt in der Datei genau %d mal vor \n", myFile.search(4));
    
    return 0;
}

