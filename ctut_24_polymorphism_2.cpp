// C++ Programming tutorial video, 1 hour basics
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

// try to automatically find the right method
using namespace std;

class Plant{
public:
	virtual void  plantGrow() { cout << "Grow Medium" << endl; }

};

class Cactus : public Plant{
public:
	void  plantGrow() { cout << "Grow Slow" << endl; }

};

class Weed : public Plant{
public:
	void  plantGrow() { cout << "Grow Fast" << endl; }

};

// abstract data type
class Car{
public: 
	virtual int getNumWheels() = 0;
	virtual int getNumDoors() = 0;
};

// class StationWagon : public Car{
// public: 
// 	int getNumWheels() { cout << "Station wagon has 4 wheels" << endl; } 
// 	int getNumDoors() { cout << "Station wagon has 4 doors" << endl; }

// 	StationWagon() {}; // empty constructor
// 	~StationWagon();
// };

int main(){

	Plant* pCactus = new Cactus;
	Plant* pWeed = new Weed;

	pCactus -> plantGrow();
	pWeed -> plantGrow();


	return 0;
}