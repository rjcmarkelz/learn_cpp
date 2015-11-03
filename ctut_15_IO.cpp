// C++ Programming tutorial video, 1 hour basics
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main(){

	string codyQuote = "Never be afraid to fail!";

	ofstream writer("codyQuote.txt");

	if(! writer){

		cout << "Error opening file" << endl;
		return -1;

	} else {

		writer << codyQuote << endl; // write the quote to a file
		writer.close(); // important to close the file
	}

	// the file is now closed, but we can append to it

	ofstream writer2("codyQuote.txt", ios::app);

	// open stream and append to whats there with ios::app
	// ios::binary : treat the file as binary
	// ios::in     : Open file to read input
	// ios::trunc  : Default when you do not use a symbol
	// ios::out    : Open a file to write output

	if(! writer2){

		cout << "Error opening file" << endl;
		return -1;

	} else {

		writer2 << "\n -Cody Markelz" << endl; // write the quote to a file
		writer2.close(); // important to close the file
	}

	char letter;

	ifstream reader("codyQuote.txt");

	if(! reader){

		cout << "Error opening file" << endl;
		return -1;

	} else {

		for(int i = 0; ! reader.eof(); i++){

			reader.get(letter);
			cout << letter;
		}

		cout << endl; 
		reader.close();

	}

}