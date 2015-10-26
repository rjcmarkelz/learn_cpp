// C++ Programming tutorial video, 1 hour basics
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main(){

	string numberGuessed; 
	int intNumberGuessed = 0;

	do {

		cout << "Guess between 1 and 10: ";

		getline(cin, numberGuessed); // cin source user input is keyboard

		intNumberGuessed = stoi(numberGuessed); // string to int
		// stod() : converts String to Double
		// debug : make sure lowercase to begin int

		cout << intNumberGuessed << endl;

	} while(intNumberGuessed != 4);

	cout << "You win" << endl;

	return 0; 
}