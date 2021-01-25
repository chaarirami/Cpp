

/* 
 * File:   baby.h
 * Author: Rami Chaari
 *
 * Created on 8. Oktober 2019, 10:06
 */

#include <stdio.h>
#include <string>
#include <cstdio>
#ifndef BABY_H
#define BABY_H
using namespace std;

 
 
class Baby {
private:
    string name;
    float alter;
public:
    void weinen();
    void trinken();
    void schlafen(int dauer);
    Baby(string name, float alter);
    ~Baby();
};

#endif /* BABY_H */

