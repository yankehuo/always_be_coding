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

enum SHOES_TYPE {
	NIKE,
	LINING,
	ADIDAS
};
class ShoesFactory {
public:
	Shoes *CreateShoes(SHOES_TYPE type) {
		switch (type) {
			case NIKE:
				return new NikeShoes();
				break;
			case LINING:
				return new LiningShoes();
				break;
			case ADIDAS:
				return new AdidasShoes();
				break;
			default:
				return nullptr;
				break;
		}
	}
};

int main() {
	ShoesFactory shoesFactory;
	Shoes *pNike = shoesFactory.CreateShoes(NIKE);
	if (pNike) {
		pNike->Show();
		delete pNike;
		pNike = nullptr;
	}
	Shoes *pLining = shoesFactory.CreateShoes(LINING);
	if (pLining) {
		pLining->Show();
		delete pLining;
		pLining = nullptr;
	}

	return 0;
}
