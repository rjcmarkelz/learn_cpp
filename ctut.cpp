// C++ Programming tutorial video, 1 hour basics
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

// define the namespace so you do not have to do things like std::out
using namespace std;

int main(){

	cout << "Hello World" << endl;

	//data types
	const double PI = 3.1415926535;

	char myGrade = 'A'; // takes up one byte in memory
	bool isHappy = true;

	int myAge = 39;

	float favNum = 3.141592; // accurate up to 6 decimal places

	double otherfavNum = 1.6180339887; // accurate 16 digits

	cout << "Favorite Number" << favNum << endl;

	// number of bits per data type
	cout << "Size of int " << sizeof(myAge) << endl;
	cout << "Size of char " << sizeof(myGrade) << endl;
	cout << "Size of bool "  << sizeof(isHappy) << endl;
	cout << "Size of float " << sizeof(favNum) << endl;
	cout << "Size of double " << sizeof(otherfavNum) << endl;


	// other data types include
	// short int : At least 16 bits
	// long int : At least 32 bits
	// long long int : At least 64 bits
	// unsigned int : Same size as signed version
	// long double : Not less then double

	// check if run correctly always return a 0
	return 0; 
}