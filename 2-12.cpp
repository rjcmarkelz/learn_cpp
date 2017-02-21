// working what characters
// chars are actually stored as ints, only use 1 byte
// using ASCII standard maps numerics to chars
// Chars and strings are stored differently
// strings have additional \0 appended to end to denote end of string in memory
// "Sabastian" would be S a b a s t i a n \0
// 'A' is stored as A
// "A" is stored as A\0
// 'A' is stored as 65
// "A" is stored as 65 0

#include <iostream>
using namespace std;

int main()
{
    char letter;

    letter = 'A'; // single quotes for chars
    cout << letter << endl;
    letter = 'B';
    cout << letter << endl;
    letter = 65;
    cout << letter << endl; // will print A
    letter = 66;
    cout << letter << endl; // will print B
    return 0;
}
