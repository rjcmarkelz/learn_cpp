// C++ Programming tutorial video, 1 hour basics
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main(){

	int randNum = (rand() % 100) + 1; // 0 and 99 modulus 100
	                                 // add 1 for 0 to 100

	while(randNum != 100) {

		cout << randNum << ", "; // print numbers from loop

		randNum = (rand() % 100) + 1;
	} 

	cout << endl;

	return 0; 
}