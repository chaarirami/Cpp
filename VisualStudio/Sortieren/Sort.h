#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <time.h>

using namespace std;

#ifndef SORT_H
#define SORT_H

class Sort {
private:
	vector<int> randomNumbers;
public:
	int randomNumberGenerator(int, int);
	void writeToFile(FILE*);
	Sort();
	~Sort();
};

#endif // !SORT_H