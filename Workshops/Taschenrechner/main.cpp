/* 
 * File:   main.cpp
 * Author: Rami Chaari
 *
 * Created on 8. Oktober 2019, 14:45
 */

#include <cstdlib>
#include <cstdio>
#include <cstdlib>
#include "Taschenrechner.h"
using namespace std;

int main(int argc, char** argv) {
    Taschenrechner rechner1;
    Taschenrechner rechner2;
    int ergebnis1 = rechner1.multiplizieren(5,3);
    float ergebnis2 = rechner2.dividieren(5,3);
    printf("%lf\n", (ergebnis1 + ergebnis2));
    return 0;
}

