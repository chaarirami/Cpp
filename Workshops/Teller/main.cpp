
/* 
 * File:   main.cpp
 * Author: Rami Chaari
 *
 * Created on 29. Oktober 2019, 08:44
 */

#include <cstdlib>
#include "teller.h"
#include "FSMTeller.h"
using namespace std;


int main(int argc, char** argv) {
    Teller teller;
    teller.setPancake(0);
    FSMTeller fsmTeller(teller);
    while (1){
        
        string command = fsmTeller.evaluateInput();
        fsmTeller.evaluateState(command);
    }
    return 0;
}

