/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FileHandler.h
 * Author: chabi
 *
 * Created on 13. Januar 2020, 19:24
 */

#ifndef FILEHANDLER_H
#define FILEHANDLER_H
#include <stdio.h>

using namespace std;

class FileHandler {
public:
    FileHandler();
    virtual ~FileHandler();
    int readFile(FILE* testFile);
    void writeFile(FILE* testFile);
private:
    FILE* testFile;

};

#endif /* FILEHANDLER_H */

