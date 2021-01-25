#include "IAusleihe.h"
#include <string>
using namespace std;


#ifndef ONLINEAUSLEIHE_H
#define ONLINEAUSLEIHE_H

class OnlineAusleihe : public IAusleihe {
private:
	string UserName;
	int PIN;
public:
	OnlineAusleihe();
	virtual ~OnlineAusleihe();
	void ausleihen(Artikel);
	void zurueckgeben(Artikel);
};

#endif // !ONLINEAUSLEIHE_H

