#include <iostream>

class Shoes {
public:
	virtual ~Shoes() {}
	virtual void Show() = 0;
};
class NikeShoes : public Shoes {
public:
	void Show() {
		std::cout << "I'm Nike." << std::endl;
	}
};
class AdidasShoes : public Shoes {
public:
	void Show() {
		std::cout << "I'm Adidas." << std::endl;
	}
};
class LiningShoes : public Shoes {
public:
	void Show() {
		std::cout << "I'm Lining." << std::endl;
	}
};


class ShoesFactory {
public:
	virtual Shoes *CreateShoes() = 0;
	virtual ~ShoesFactory() {}
};
class NikeProducer : public ShoesFactory {
public:
	Shoes *CreateShoes() {
		return new NikeShoes();
	}
};
class AdidasProducer : public ShoesFactory {
public:
	Shoes *CreateShoes() {
		return new AdidasShoes();
	}
};
class LiningProducer : public ShoesFactory {
public:
	Shoes *CreateShoes() {
		return new LiningShoes();
	}
};


int main() {
	ShoesFactory *nikeProducer = new NikeProducer();
	Shoes *nikeShoes = nikeProducer->CreateShoes();
	nikeShoes->Show();
	delete nikeProducer;
	delete nikeShoes;

	ShoesFactory *adidasProducer = new AdidasProducer();
	Shoes *adidasShoes = adidasProducer->CreateShoes();
	adidasShoes->Show();
	delete adidasProducer;
	delete adidasShoes;

	return 0;
}
