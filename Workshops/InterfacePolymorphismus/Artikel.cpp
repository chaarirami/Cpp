#include "Artikel.h"
#include <iostream>

Artikel::Artikel() {
	Name = "Harry Potter";
	Status = false;
}

Artikel::~Artikel() {

}

Artikel::Artikel(bool status, string name) {
	this->Status = status;
	this->Name = name;
}

void Artikel::ausleihen() {

}

bool Artikel::zurueckgeben() {
	cout << "Artikel wurde zurückgegeben" << endl;
	return false;
}

bool Artikel::getStatus() {
	return Status;
}

void Artikel::setStatus(bool status) {
	this->Status = status;
}