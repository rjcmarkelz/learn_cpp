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

	double eulersConstant = .57721;
	string eulerGuess; 

	double eulerGuessDouble;

	cout << "What is Euler's Constant?";
	getline(cin, eulerGuess);

	eulerGuessDouble = stod(eulerGuess);

	if(eulerGuessDouble == eulersConstant){

		cout << "You are right" << endl;

	} else{

		cout << "You are wrong" << endl;
	}

	cout << "Size of String " << eulerGuess.size() << endl;
	cout << "Is string empty " << eulerGuess.empty() << endl;
	cout << eulerGuess.append(" was your guess") << endl;


	// compare strings
	string dogString = "dog";
	string catString = "cat";

	cout << dogString.compare(catString) << endl;
	cout << dogString.compare(dogString) << endl;
	cout << catString.compare(dogString) << endl;

	return 0; 
}