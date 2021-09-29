#include <iostream>

class Clothe {
public:
	virtual void Show() = 0;
	virtual ~Clothe() {}
};
class NikeClothe : public Clothe {
public:
	void Show() {
		std::cout << "I'm Nike clothe." << std::endl;
	}
};
class Shoes {
public:
	virtual void Show() = 0;
	virtual ~Shoes() {}
};
class NikeShoes : public Shoes {
public:
	void Show() {
		std::cout << "I'm Nike shoes." << std::endl;
	}
};

class Factory {
public:
	virtual Shoes *CreateShoes() = 0;
	virtual Clothe *CreateClothe() = 0;
	virtual ~Factory() {}
};
class NikeProducer : public Factory {
public:
	Shoes *CreateShoes() {
		return new NikeShoes();
	}
	Clothe *CreateClothe() {
		return new NikeClothe();
	}
};

int main() {
	Factory *pnikeProducer = new NikeProducer();
	Shoes *pnikeShoes = pnikeProducer->CreateShoes();
	Clothe *pnikeClothe = pnikeProducer->CreateClothe();
	pnikeShoes->Show();
	pnikeClothe->Show();
	delete pnikeProducer;
	delete pnikeShoes;
	delete pnikeClothe;

	return 0;
}
