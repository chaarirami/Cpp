#include "Sortieren.h"
#include <ctime>
#include <cstdlib>

#define MAX 100
#define MIN 0

Sortieren::Sortieren(){

}

Sortieren::~Sortieren() {

}

void writeToFile(FILE* expFile) {

}

int Sortieren::randomNumberGenerator(int max, int min) {
	return (rand() % (max + 1) + min);
}
