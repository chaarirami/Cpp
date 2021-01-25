#include "OfflineAusleihe.h"
#include "OnlineAusleihe.h"
#include "Artikel.h"
#include "Kunde.h"

int main(void) {
	IAusleihe* kunde = NULL;
	OfflineAusleihe offline;
	OnlineAusleihe online;
	Artikel artikel;


	kunde = &online;
	kunde->ausleihen(artikel);

	kunde = &offline;
	kunde->ausleihen(artikel);

	return 0;
}