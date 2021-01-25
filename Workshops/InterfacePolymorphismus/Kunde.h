#pragma once
#ifndef KUNDE_H
#define KUNDE_H
#include "OfflineAusleihe.h"
#include "OnlineAusleihe.h"
#include "IAusleihe.h"

class Kunde {
private:
public:
	Kunde();
	~Kunde();
	static void getInstance();
	IAusleihe* k;
};



#endif // !KUNDE_H
