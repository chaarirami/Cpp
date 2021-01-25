#include "Sort.h"
#define MAX 100
#define MIN 0


Sort::Sort() {

}

Sort::~Sort(){

}

int Sort::randomNumberGenerator(int min, int max) {
	int random = (rand() % (max + 1)) + min;
	return random;
}

void Sort::writeToFile(FILE* expFile) {
	srand(time(NULL));
	for (int i = 0; i < 100; i++) {
		int random = Sort::randomNumberGenerator(MIN, MAX);
		Sort::randomNumbers.push_back(random);
	}

	for (int i = 0; i < Sort::randomNumbers.size(); i++) {
		fprintf(expFile, "%d |", Sort::randomNumbers[i]);
	}
}