// C++ Programming tutorial video, 1 hour basics
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

void makeMeYoung(int* age){

	cout << "I used to be " << *age << endl;
	*age = 21;
	
}



int main(){

	int myAge = 31;

	int* agePtr = &myAge;

	// get the address of the pointer
	cout << "Address of pointer " << agePtr << endl;      //reference

	// get the data stored there
	cout << "Data at memory address " << *agePtr << endl; // dereference

	// can use with arrays
	int badNums[5] = {4, 13, 14, 24, 34};

	int* numArrayPtr = badNums; // increment through array

	cout << "Address " << numArrayPtr << " Value " << *numArrayPtr << endl;

	numArrayPtr++; // get the next value of the array
	// integer takes up four bites so difference in addresses are 
	// incremented +4 for each integer

	// array name is just a pointer to the array
	cout << "Address " << badNums << " value " << *badNums << endl;


	// passing pointer to function passing a reference that can be changed
	makeMeYoung(&myAge); // pass by reference

	cout << "I'm " << myAge << " years old now" << endl;

}