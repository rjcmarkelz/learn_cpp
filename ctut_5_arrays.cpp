// C++ Programming tutorial video, 1 hour basics
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main(){

	int myFavNums[5]; // a box container for your data

	int badNums[5] = {4, 13, 14, 28, 34}; //index start at zero

	cout << "Bad Numbers 1: " << badNums[0] << endl; 

	//multi dimensional arrays

	char myName[6][7] = {{'R', 'o', 'b', 'e', 'r', 't'},
                          {'M', 'a', 'r', 'k', 'e', 'l', 'z'}};

    cout << "2nd letter in 2nd array " << myName[1][1] << endl;

    //change a letter in an array
     cout << "Old Value " << myName[0][2] << endl;
     
    myName[0][2] = 'e';

    cout << "New Value " << myName[0][2] << endl;

    for(int i = 1; i <= 10; i++ ){

    	cout << i << endl;
    }

    //nested for loop over array, start index at 0
    for(int j = 0; j < 6; j++){
    	for(int k = 0; k < 7; k++){
    		cout << myName[j][k];
    	}

    	cout << endl;
    }

	return 0; 
}