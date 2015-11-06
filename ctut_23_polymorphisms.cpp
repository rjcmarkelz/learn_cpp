// C++ Programming tutorial video, 1 hour basics
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

// try to automatically find the right method
using namespace std;

class Plant{
	public: void getFamily() { cout << "We are plants" << endl; }

	virtual void  getClass() { cout << "I'm a plant" << endl; }
	// mark this as virtual if method will be overwritten by subclass

};

class Cactus : public Plant{
public:
	void getClass() {cout << "I'm a Cactus" << endl; }

};

class Barrel : public Cactus{
public:
	void getClass() { cout << "I'm a Barrel Cactus" << endl;}
	void getDerived() { cout << "I'm a Plant and a Cactus" << endl;}
};


// call from function
void whatClassAreYou(Plant *plant){

	plant -> getClass();
}

int main(){

	Plant *plant = new Plant;
	Cactus *cactus = new Cactus;

	plant -> getClass();
	cactus -> getClass();

	whatClassAreYou(plant);
	whatClassAreYou(cactus);

	Cactus green;
	Barrel thick;

	Plant* ptrCactus = &green;
	Plant* ptrBarrel = &thick;

	ptrCactus -> getFamily();
	ptrCactus -> getClass();

	// call superclass
	ptrBarrel -> getFamily();
	ptrBarrel -> getClass();

	return 0;
}