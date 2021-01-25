
/* 
 * File:   Zaehlungen.h
 * Author: acl724
 *
 * Created on 15. November 2019, 16:12
 */

#ifndef ZAEHLUNGEN_H
#define ZAEHLUNGEN_H
#include <stdio.h>
#include <string>
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <cstdio>

using namespace std;

class Zaehlungen {
public:
    Zaehlungen();
    ~Zaehlungen();
    void writeRandomNumbers(FILE*);
    void readFromFile(FILE*);
    void countNumbersfromFile(FILE*);
private:
    int randomNumberGenerator(int, int);
};

#endif /* ZAEHLUNGEN_H */

