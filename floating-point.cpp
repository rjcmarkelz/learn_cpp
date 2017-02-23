// floating points
//

#include <iostream>
using namespace std;

int main()
{
    float distance;
    double mass;
    int number;

    distance = 1.495979E11;
    mass = 1.989E30;
    number = 7.5; // assigning float to int will discard, truncate it!
    cout << "The sun is " << distance << " meters away.\n";
    cout << "The mass of the sun is " << mass << " kilograms. \n";
    cout << "The number is entered as 7.5, but comes out as:" << number <<  "\n";
    return 0;
}
