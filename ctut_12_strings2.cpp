// C++ Programming tutorial video, 1 hour basics
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main(){

	char happyArray[6] = {'H', 'a', 'p', 'p', 'y', '\0'}; //define a string in C

	string birthdayString = " Birthday"; // C++, double quotes

	cout << happyArray + birthdayString << endl;

	string yourName; 
	cout << "What is your name";
	getline(cin, yourName);

	cout << "hello " << yourName << endl;

	string wholeName = yourName.assign(yourName);
	cout << wholeName << endl;

	string firstName = wholeName.assign(wholeName, 0 , 5);
	cout << firstName << endl;

	int lastNameIndex = yourName.find("Markelz", 0);
	cout << "Index for last name" << lastNameIndex << endl;

	return 0; 
}