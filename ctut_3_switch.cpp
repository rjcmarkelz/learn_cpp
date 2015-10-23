// C++ Programming tutorial video, 1 hour basics
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main(){

	int greetingOption = 2;

	switch(greetingOption){

		case 1:
		    cout << "bonjour" << endl;
		    break;
		case 2:
		    cout << "Hola" << endl;
		    break;

		case 3:
		    cout << "Hello!" << endl;
		    break;
		    
		default :
		    cout << "Hello" << endl;
	}

	return 0; 
}