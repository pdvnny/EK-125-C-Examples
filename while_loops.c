//
// Created by dvnny on 11/4/2021.
//


/// File with demonstrations for WHILE and DO-WHILE LOOPS

/// INCLUDES ARE IMPORTANT TO REMEMBER
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

/// EVERYTHING IN C IS A FUNCTION - MAIN IS A SPECIAL ONE!!!
int main() {

    int end_condition = 1;

    /***************
     * SITUATION:
     *      - we have an end condiiton
     *      - we have a starting condition
     *
     *  STRUCTURE:
     *      - repeat actions until reaching condition
     *************/

    int counter = 1;
    printf("THIS LOOP WON'T RUN.\n\n");
    while (counter < end_condition) {
        printf("Loop number %d\n",counter);
        counter++;                                      /// NEED TO UPDATE CONDITION VARIABLE!
    }

    counter = 1;
    printf("DO WHILE LOOPS WILL RUN AT LEAST ONCE.\n");
    do {
        printf("Loop number %d\n", counter);
        counter++;
    } while (counter < end_condition);                 /// NOTICE: CONDITION IN A DIFFERENT ORDER

    return 0;
}
