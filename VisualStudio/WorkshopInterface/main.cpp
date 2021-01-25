#include <iostream>

using namespace std;

class IMegaphon {
public:
	virtual void singen() = 0;
};

class Katze : public IMegaphon {
	virtual void singen() { cout << "Katze singt"  << endl; }
};

class Kind : public IMegaphon {
	virtual void singen() { cout << "Kind singt" << endl; }
};

class Vogel : public IMegaphon {
	virtual void singen(){ cout << "Vogel singt" << endl; }
};

int main(void) {
	Kind kind0;
	Katze katze0;
	Vogel vogel0;


	IMegaphon* megaphon = &kind0;
	megaphon->singen();

	megaphon = &katze0;
	megaphon->singen();

	megaphon = &vogel0;
	megaphon->singen();

	return 0;
}