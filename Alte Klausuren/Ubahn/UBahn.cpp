/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   UBahn.cpp
 * Author: Rami Chaari
 * 
 * Created on 27. Januar 2020, 10:40
 */

#include "UBahn.h"
#include <iostream>
#include <time.h>


using namespace std;

UBahn::UBahn() {
    
}


UBahn::~UBahn() {
}

void UBahn::drive(){
    cout << "U" << line << " driving" << endl;
}

void UBahn::stop() {
    cout << "U" << line << " stopping" << endl;
}

void UBahn::arrive() {
    time_t timer;
    tm *nun;
    timer = time(NULL);
    nun = localtime(&timer);
    cout <<"U"<< line << " arrived at " << nun->tm_mday << "/" <<nun->tm_mon +1<<"/"<<nun->tm_year + 1900 << " "<<nun->tm_hour<<":"<<nun->tm_min<<":"<<nun->tm_sec<<endl; ;
}





