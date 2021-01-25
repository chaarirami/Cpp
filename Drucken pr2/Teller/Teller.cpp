 /* Created on 22. Oktober 2019, 11:12
 */
#include <iostream>
#include "Teller.h"
#include <cstdlib>
using namespace std;

Teller::Teller() {
    pancakeNum = 0;
    
}

Teller::Teller(int max) {
    maxPancake = max;
     pancakeNum = 0;
}

Teller::~Teller() {
}



void Teller::put(void){
    if (pancakeNum == 10){
        cout << " \n Teller ist VOLL !" << endl;
    }else{
        pancakeNum += 1;
    }
}
void Teller::remove(void){
    if (pancakeNum == 0){
        cout << " \n Teller ist LEER !" << endl;
    }else{
        pancakeNum -= 1;
    }
}

int Teller::getPanckakeNum(void){
    printf("\n Pfannkuchen auf dem Teller: %d", pancakeNum);
    return pancakeNum;
}
