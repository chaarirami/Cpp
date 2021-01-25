#include <string>
using namespace std;

#ifndef ARTIKEL_H
#define ARTIKEL_H


class Artikel {
private:
	string Name;
	bool Status;
public:
	Artikel();
	~Artikel();
	Artikel(bool, string);
	void ausleihen();
	bool zurueckgeben();
	bool getStatus();
	void setStatus(bool);
};

#endif // !ARTIKEl_H
