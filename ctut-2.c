/* multiline comment */

// single line comment

#include<stdio.h>
#include<string.h>

// #define MYNAME "Cody Markelz" // constant

// int globalVar = 100; // camel case

int main(){

    char firstLetter = 'D'; // 256 characters

    int age = 40; // -32,768 and 32,768

    long int superBigNum = -32485858; 

    float piValue = 3.14159;

    double reallyBigPi = 3.1415923423423523523523525;

    printf("\n");

    printf("this will print to screen\n\n");

    printf("I am %d years old \n\n", age);

    printf("Big number %ld\n\n", superBigNum);

    printf("Pi = %.5f\n\n", piValue);

    printf("Big Pi = %.15f\n\n", reallyBigPi);

    printf("First letter in my name is %c\n",firstLetter);

    printf("My name is %s\n", "Cody" );

    char myName[] = "Cody Markelz";

    printf("My name is %s\n", myName); 

    strcpy(myName, "Other Name");

    printf("my new name is %s\n", myName); //this is all allowed through string.h

}

