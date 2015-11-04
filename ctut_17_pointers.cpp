// C++ Programming tutorial video, 1 hour basics
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main(){

	int myAge = 31;
	char myGrade = 'A';

	cout << "Size of int in bites " << sizeof(myAge) << endl;
	cout << "Size of char in bites " << sizeof(myGrade) << endl;

	// use the reference operator to show where myAge is located in memory
	// &

	cout << "myAge is located at  " << &myAge << endl;
	

}