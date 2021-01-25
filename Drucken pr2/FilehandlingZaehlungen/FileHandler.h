/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FileHandler.h
 * Author: chabi
 *
 * Created on 16. November 2019, 15:28
 */

#ifndef FILEHANDLER_H
#define FILEHANDLER_H
#include <vector>

using namespace std;

class FileHandler {
public:
    FileHandler();
    void writetoFile(const char* name);
    void readfromFile(const char* name);
    void search(int a);
    void readandwritetoFile(const char* zaehlungen);
    void writetoPrsort(const char* name);
    void bubbleSort(const char* name);
    void writebubblesort(const char* name);
private:
    int randomNumber = 0;
    vector<int> dataList;
    vector<int> sortList;
    vector<int>:: const_iterator i;

};

#endif /* FILEHANDLER_H */

