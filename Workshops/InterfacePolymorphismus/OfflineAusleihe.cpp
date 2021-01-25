#include "OfflineAusleihe.h"
#include <iostream>

using namespace std;

OfflineAusleihe::~OfflineAusleihe(){

}

OfflineAusleihe::OfflineAusleihe(){
	ausweisDaten = 190898304;
}

void OfflineAusleihe::ausleihen(Artikel artikel) {
	artikel.ausleihen(); // Methode der Klasse Artikel aus Aufgabe 1
	cout << "Online vom User: " << this->ausweisDaten << endl;
}

void OfflineAusleihe::zurueckgeben(Artikel artikel) {

}