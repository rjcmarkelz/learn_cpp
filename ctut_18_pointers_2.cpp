// C++ Programming tutorial video, 1 hour basics
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main(){


	int myAge = 31;

	int* agePtr = &myAge;

	cout << "Address of pointer " << agePtr << endl;      //reference
	cout << "Data at memory address " << *agePtr << endl; // dereference

	// can use with arrays

	int badNums[5] = {4, 13, 14, 24, 34};

	int* numArrayPtr = badNums;

	cout << "Address " << numArrayPtr << " Value " << *numArrayPtr << endl;

	numArrayPtr++;
}