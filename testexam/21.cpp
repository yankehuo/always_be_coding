#include <bits/stdc++.h>
using namespace std;

/*
int main(int argc, char** argv) 
{
	
	std::vector<int> tmpVec;
    // cout << tmpVec.size() << endl;
	tmpVec.resize(10);
    // cout << tmpVec.size() << endl;
	int *pint = tmpVec.data();
    cout << pint << endl;
    cout << *pint << endl;
	tmpVec.resize(2 * tmpVec.size());
    // cout << tmpVec.size() << endl;
	*pint = 10;
    cout << pint << endl;
    cout << *pint << endl;

	return 0;
}
*/

/*
int main(int argc, char** argv) 
{
	
	char *pBuf = new char[10];
	std::shared_ptr<char> sPtr(pBuf);
	delete[] pBuf;
	pBuf = nullptr;
    
	return 0;
}
*/

class Singleton {
private:
    Singleton() {}
    Singleton(const Singleton *rhs) {}
    Singleton &operator=(const Singleton *rhs) {}
    ~Singleton();
public:
    Singleton *getInstance() {
        static Singleton instance;
        return &instance;
    }
};

class Singleton {
private:
    static Singleton *instance;
    static std::mutex mtx;

    Singleton() {}
    Singleton(const Singleton &rhs) {}
    Singleton &operator=(const Singleton &rhs) {}
    ~Singleton();
public:
    static Singleton *getInstance() {
        if (instance == nullptr) {
            {
                std::lock_guard<std::mutex> locker(mtx);
                if (instance == nullptr) {
                    instance = new Singleton;
                }
            }
        }
    }
};
Singleton *Singleton::instance = nullptr;
std::mutex Singleton::mtx;

// hungry mode
class Singleton {
private:
    static Singleton *instance;
public:
    static Singleton *getInstance() {
        return instance;
    }
};
Singleton *Singleton::instance = new Singleton;

