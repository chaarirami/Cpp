#ifndef IAUSLEIHE_H
#define IAUSLEIHE_H

#include "Artikel.h"

class IAusleihe {
public: 
	virtual ~IAusleihe() {
	};
	virtual void ausleihen(Artikel) = 0;
	virtual void zurueckgeben(Artikel) = 0;
};

#endif // !IAUSLEIHE_H
