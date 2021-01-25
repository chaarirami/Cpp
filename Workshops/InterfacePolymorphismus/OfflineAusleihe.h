#include "Artikel.h"
#include "IAusleihe.h"


#ifndef OFFLINEAUSLEIHE_H
#define OFFLINEAUSLEIHE_H

class OfflineAusleihe : public IAusleihe{
private:
	long long ausweisDaten;
public:
	virtual ~OfflineAusleihe();
	OfflineAusleihe();
	void ausleihen(Artikel);
	void zurueckgeben(Artikel);

};

#endif // !OFFLINEAUSLEIHE_H

