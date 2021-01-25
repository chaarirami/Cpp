/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DataManagement.h
 * Author: chabi
 *
 * Created on 11. November 2019, 18:57
 */

#ifndef DATAMANAGEMENT_H
#define DATAMANAGEMENT_H
#define SIEBEN 7

#include <cstdlib>
#include <iostream>
#include <math.h>
#include <vector>

#include <unordered_set>


using namespace std;

class DataManagement {
public:
    DataManagement();
    void writetoFile(const char* name);
    void readfromFile(const char* name);
   
    
private:
    vector<int> dataList;
    vector<int>:: const_iterator i;
    const int MAX = 7;
};

#endif /* DATAMANAGEMENT_H */

