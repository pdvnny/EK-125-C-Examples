//
// Created by dvnny on 11/4/2021.
//

/// INCLUDES ARE IMPORTANT TO REMEMBER
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

#define ENDLOOPS 5

/// EVERYTHING IN C IS A FUNCTION - MAIN IS A SPECIAL ONE!!!
int main() {

    /// REGULAR FOR LOOP      for i = 1:#
    int i = 0;
    for (i = 0; i <= ENDLOOPS; i++) {
        printf("Line %d: %c\n", i, '*');
    }
    printf("\n");

    /// NESTED FOR LOOPS - MATRIX!
    for (i = 0; i < ENDLOOPS; i++) {
        printf("Line #%d: ",i);
        for (int j = 0; j < ENDLOOPS; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    /// NESTED FOR LOOPS - PYRAMID
    /************************
     * 1
     * 1 1
     * 1 1 1
     * 1 1 1 1
     * 1 1 1 1 1
     ************************/
    for (i = 0; i < ENDLOOPS; i++) {
        printf("Line #%d: ",i);
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}
