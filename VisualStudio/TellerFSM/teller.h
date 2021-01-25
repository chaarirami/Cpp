/* 
 * File:   teller.h
 * Author: Rami Chaari
 *
 * Created on 29. Oktober 2019, 08:44
 */

#include <iostream>
#ifndef TELLER_H
#define TELLER_H
#define MAX 10

using namespace std;

class Teller {
private:
    int max = MAX;
    int pfannkuchen;
public:
    void put();
    void remove();
    int getPancake();
    void setPancake(int);
public:
    Teller();
    ~Teller();
};


#endif /* TELLER_H */

