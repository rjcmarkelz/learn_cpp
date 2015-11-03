// C++ Programming tutorial video, 1 hour basics
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main(){

	vector <int> lotteryNumVect(10);   //just like arrays, but values can change

	int lotteryNumArray[5] = {4, 13, 14, 24, 34}; // put array inside vector

	lotteryNumVect.insert(lotteryNumVect.begin(), lotteryNumArray,
	    lotteryNumArray + 3); // start inserting at start of vector

	lotteryNumVect.insert(lotteryNumVect.begin()+5, 44); 

	cout << lotteryNumVect.at(5) << endl; 

	lotteryNumVect.push_back(64); //add value at end of vector

	cout << "Final Value " << lotteryNumVect.back() << endl; // get final value
	cout << "First Value " << lotteryNumVect.front() << endl; // first value
	cout << "Empty " << lotteryNumVect.empty() << endl; // return 0 if not empty
	// or a 1 if it is empty
	cout << "Size of " << lotteryNumVect.size() << endl; // get size

	lotteryNumVect.pop_back(); 

	return 0; 
}