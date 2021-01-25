
#include "FSMTeller.h"

void FSMTeller::evaluateState(string command) {
    State nextState;
    int pfannkuchen = theTeller.getPancake();
    switch (theState) {
        case Voll:
            if (command == "put") {
                cout << "Der Teller ist bereits voll!" << endl;
                nextState = Voll;
            } else if (command == "remove") {
                theTeller.remove();
                pfannkuchen = theTeller.getPancake();
                nextState = Gefuellt;
            }
            break;
        case Leer:
            if (command == "remove"){
                cout << "Der Teller ist bereits leer!" << endl;
                nextState = Leer;
            } else if(command == "put"){
                theTeller.put();
                pfannkuchen = theTeller.getPancake();
                nextState = Gefuellt;
            }
            break;
        case Gefuellt:
            if (command == "put"){
                theTeller.put();
                pfannkuchen = theTeller.getPancake();
            } else if (command == "remove") {
                theTeller.remove();
                pfannkuchen = theTeller.getPancake();
            }
            if (pfannkuchen == 10){
                nextState = Voll;
            } else if (pfannkuchen == 0){
                nextState = Leer;
            } else {
                nextState = Gefuellt;
            }
            break;
        default:
            nextState = Leer;
            break;
    };
    theState = nextState;
    cout << "Es sind " << pfannkuchen << " Pfannkuchen auf dem Teller" << endl;
}

string FSMTeller::evaluateInput() {
    string command;
    cout << "Schreiben Sie put um einen Pfannkuchen auf den Teller zu tun." << endl;
    cout << "Schreiben Sie remove um einen Pfannkuchen vom Teller zu nehmen." << endl;
    cin >> command;
    return command;
}

FSMTeller::FSMTeller(Teller theTeller) {
    this->theTeller = theTeller;
    theState = Leer;
}

FSMTeller::~FSMTeller(){
    
}

State FSMTeller::getState(){
    return theState;
}
