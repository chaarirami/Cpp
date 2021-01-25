/*
 * 
 * 
 * 
 */

/* 
 * File:   Taschenrechner.h
 * Author: Rami Chaari
 *
 * Created on 8. Oktober 2019, 14:45
 */

#ifndef TASCHENRECHNER_H
#define TASCHENRECHNER_H
#include <string>
#include <math.h>
using namespace std;


class Taschenrechner {
private:
    string herteller;
public:
    Taschenrechner();
    ~Taschenrechner();
    float addieren (float,float);
    int substrahieren(int,int);
    int multiplizieren(int,int);
    float dividieren(int,int);
};


#endif /* TASCHENRECHNER_H */

