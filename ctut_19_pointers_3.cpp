// C++ Programming tutorial video, 1 hour basics
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;
// use pointers if you do not want to have to initialize at declaration
// if you do not need to change whatever variable, then use a reference
// over a pointer

void makeMeYoung(int* age){

	cout << "I used to be " << *age << endl;
	*age = 21;
}

void actYourAge(int& age){
	age = 31;
}

int main(){

	int myAge = 31;

	makeMeYoung(&myAge);

	cout << "I'm " << myAge << " years old now" << endl;

	int& ageRef = myAge;

	cout << "myAge : " << myAge << endl;

	ageRef++; // globally changing the age

	cout << "myAge : " << myAge << endl;

	actYourAge(ageRef); // show difference between passing reference and pointers

	cout << "myAge : " << myAge << endl;



}