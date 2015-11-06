// C++ Programming tutorial video, 1 hour basics
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

// OO programing model real world objects in code
// ask yourself what makes a specific object an object?
// Attributes : height weight etc. modeled in variables
// Capabililties : Run Eat etc. modeled in functions/methods.

class plant{
	// encapsulation
	private: 
		int height;
		int leafLength;
		string name;

		static int numOfPlants; // shared with every plant object ever created

	public:
		int getHeight(){return height; }
		int getLeafLength(){return leafLength; }
		string getName(){return name; }
		void setHeight(int cm){ height = cm; }
		void setLeafLength(int cm){ leafLength = cm; }
		void setName(string plantName){ name = plantName; }

		void setAll(int, int, string); //prototype

		plant(int, int, string); // constructor
		~plant(); //destructor
		plant(); // overloading the function. Name the same, attributes different

		static int getNumOfPlants(){ return numOfPlants; }//can only access static variables

		void toString();
}; // notice the semicolon here


// // now we are going to declare everything
int plant::numOfPlants = 0;
void plant::setAll(int height, int leafLength, string name){
	this -> height = height; //refer to specific plant's height
	this -> leafLength = leafLength; //refer to specific plant's leafLength
	this -> name = name; //refer to specific plant's name
	plant::numOfPlants++; // change the static variables
}

// // now for the constructor
plant::plant(int height, int leafLength, string name){
	this -> height = height; //refer to specific plant's height
	this -> leafLength = leafLength; //refer to specific plant's leafLength
	this -> name = name; //refer to specific plant's name
	plant::numOfPlants++; // change the static variables
}

// // destructor
plant::~plant(){

	cout << "Plant " << this -> name << " destroyed";
}

// overloaded call Plant class with no attributes
plant::plant(){

	plant::numOfPlants++; // increment number of plants created

}

void plant::toString(){

	cout << this -> name << " is " << this -> height << " cms tall and " <<
	this -> leafLength << " has leaves of this length" << endl;
}

// inheritance
// make new class that has all the atributes of it's parent
class Cactus : public plant{

	//new private 
private:
	int water = 10;

public:
	void getWater(){ cout << "The water is: " << water << endl;}

	// define the new constructor
	Cactus(int, int, string, int);

	Cactus() : plant(){}; //default constructor calling parent default

	void toString();
}; // remember the semicolon here

Cactus::Cactus(int height, int leafLength, string name, int water) :
plant(height, leafLength, name){ // reference the parent class
	this -> water = water;  // just change what is different
}

// notice the private things in plant:: have to be accessed by methods
// the water can be accessed directly
void Cactus::toString(){
	cout << this -> getName() << " is " << this -> getHeight() << 
	"cms tall and has a leaf length of " << getLeafLength() << " cms and has " <<
	water << " stored." << endl;
}



int main(){

	// now to make some plants
	plant brassica;  // constructor that does not get atributes

	brassica.setHeight(33);
	brassica.setLeafLength(10);
	brassica.setName("brapa");

	cout << brassica.getName() << " is " << brassica.getHeight() << " cm tall and has" << 
	brassica.getLeafLength() << " leaves." << endl;

	// constructor that does get attributes
	plant arabidopsis(2, 4, "arabidopsis");

	cout << arabidopsis.getName() << " is " << arabidopsis.getHeight() << " cm tall and has" << 
	arabidopsis.getLeafLength() << " leaves." << endl;

	Cactus barrel(10, 4, "barrel", 30);

	cout << "Number of Plants: " << plant::getNumOfPlants() << endl;

	barrel.getWater();

	arabidopsis.toString();
	barrel.toString();

	barrel.plant::toString();

	return 0;
}