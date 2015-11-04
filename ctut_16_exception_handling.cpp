// C++ Programming tutorial video, 1 hour basics
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main(){

	int number = 0;// catch division by zero error example

	//surround by try block
	try{

		if(number != 0){

			cout << 2/number << endl;

		} else throw(number); // throw number to catch
	}

	catch(int number){

		// catch number down here
		// keep program from crashing
		cout << number << " is not valid" << endl; 
	}
}