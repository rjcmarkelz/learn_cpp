// C++ Programming tutorial video, 1 hour basics
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

// functions appear before main function
// function prototype can use defaults 
int addNumbers(int firstNum, int secondNum = 0){ 

	int combinedValue = firstNum + secondNum;

	return combinedValue;

}

// function overloading
// use same name but different attributes

int addNumbers(int firstNum, int secondNum, int thirdNum){

	return firstNum + secondNum + thirdNum; // can do addition inside return
}

int main(){

	cout << addNumbers(1) << endl;

	cout << addNumbers(1, 5, 6) << endl;

	return 0; 
}