#include "teller.h"

Teller::Teller() {
    
}

Teller::~Teller() {

}

void Teller::put() {
    pfannkuchen = pfannkuchen + 1;
}

void Teller::remove() {
    pfannkuchen = pfannkuchen - 1;
}

int Teller::getPancake() {
    //cout << "Es sind " << pfannkuchen << "Pfannkuchen auf dem Teller" << endl;
    return pfannkuchen;
}

void Teller::setPancake(int pfannkuchen){
    this->pfannkuchen = pfannkuchen;
}