
/* 
 * File:   main.cpp
 * Author: acl724
 *
 * Created on 15. November 2019, 16:11
 */

#include <cstdlib>
#include "Zaehlungen.h"

using namespace std;

int main(int argc, char** argv) {
    Zaehlungen zahl1;
    FILE* output = fopen("RandomZahlen.csv", "w");
    zahl1.writeRandomNumbers(output);
    fclose(output);
    FILE* input = fopen("RandomZahlen.csv", "r");
    zahl1.readFromFile(input);
    fclose(input);
    FILE* output2 = fopen("RandomZahlen.csv", "rw");
    zahl1.countNumbersfromFile(output2);
    fclose(output2);
    return 0;
}