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

	// largest int and overflow example
	int largestInt = 2147483647;
	int largestInt2 = 2147483648; // overflow
	cout << "largest int   " << largestInt << endl;
	cout << "largest int overflow  " << largestInt2 << endl; // yikes

	// up next is short hand assignment for arithmetic
	cout << "5 + 2 = " << 5+2 << endl;
	cout << "5 - 2 = " << 5-2 << endl;
	cout << "5 * 2 = " << 5*2 << endl;
	cout << "5 / 2 = " << 5/2 << endl;
	cout << "5 % 2 = " << 5%2 << endl;

	int five = 5;
	cout << "5++ = " << five++ << endl;
	cout << "++5 = " << ++five << endl;
	cout << "5-- = " << five-- << endl;
	cout << "--5 = " << --five << endl;

	five += 6; five = five + 6;

	// order of operations
	// multiplication and division before add subtract
	cout << "1 + 2 - 3 * 2 = " << 1 + 2 - 3 * 2 << endl;
	cout << "(1 + 2 - 3) * 2 = " << (1 + 2 - 3)*2 << endl;

	// casting to different types 
	cout << "4 / 5 = " << 4 / 5 << endl; // returns 0
	cout << "4 / 5 = " << (float) 4/5 << endl; // returns 0.8





	// check if run correctly always return a 0
	return 0; 
}