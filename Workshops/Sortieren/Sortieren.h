#ifndef SORTIERERN_H
#define SORTIEREN_H

#include <stdio.h>

class Sortieren {
public:
	void writeToFile(FILE*);
private:
	Sortieren();
	~Sortieren();
	int randomNumberGenerator(int, int);
};

#endif // !SORTIERERN_H
