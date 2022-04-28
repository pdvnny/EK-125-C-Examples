//
// Created by dvnny on 11/4/2021.
//

/// INCLUDES ARE IMPORTANT TO REMEMBER
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

/// EVERYTHING IN C IS A FUNCTION - MAIN IS A SPECIAL ONE!!!
int main() {

    /// PART 1 - TYPES; INTS VS. FLOATS
    int a, b, c;
    float x, y, z;

    a = 5;
    b = 2;

    x = 2.0;

    printf("This is a/b: %d\n", (a/b));
    printf ("This is x/b: %f\n", (a/x));


    /// PART 2 - generating random numbers
    srand(time(NULL));     /// initialize the ability to generate a random number

    /// FORMULA FOR RANGE OF RANDOM NUMBER:  rand() % (MAX - MIN + 1) + MIN
    /// random number from 2 to 100
    y = rand() % (100 - 2 + 1) + 2;
    printf("Here's my random number: %f\n", y);


    return 0;
}