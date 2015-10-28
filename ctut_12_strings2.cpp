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

	string firstName = wholeName.assign(wholeName, 0 , 5); //substring
	cout << firstName << endl;

	int lastNameIndex = yourName.find("Markelz", 0); //index string search
	cout << "Index for last name" << lastNameIndex << endl;

	yourName.insert(5, "John "); // insert middle name
	cout << yourName << endl;

	yourName.erase(5,5); // remove middle name
	cout << yourName << endl;

	yourName.replace(5,7,"Maximus"); //replace last name
	cout << yourName << endl;


	return 0; 
}