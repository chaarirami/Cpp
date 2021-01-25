#include "OnlineAusleihe.h"
#include <iostream>

OnlineAusleihe::OnlineAusleihe(){
	PIN = 0000;
	UserName = "Rami";
}

OnlineAusleihe::~OnlineAusleihe() {

}

void OnlineAusleihe::ausleihen(Artikel artikel) {
	artikel.ausleihen(); // Methode der Klasse Artikel aus Aufgabe 1
	cout << "Online vom User: " << this->UserName << endl;
}

void OnlineAusleihe::zurueckgeben(Artikel artikel) {
	
}