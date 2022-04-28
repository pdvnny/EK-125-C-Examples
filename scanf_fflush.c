#include <stdio.h>

/// LETS EXPLORE THE INPUT BUFFER!

int main() {

    char a;
    printf("Lets start with a basic input: ");
    scanf("%c", &a);

    printf("\nReturning the entered character now: \t%c\n",a);

    fflush(stdin);

    /// LETS GET INTO THE DETAILS OF THE INPUT BUFFER NOW
    int count = 0;
    printf("Next char: ");
    while (scanf("%c", &a)) {
        count++;     /// add to count whenever a new character is read in
        printf("\nRead a char.\n");
        printf("Next char: ");
    }
    printf("\n\nHere is the number of characters that we read in: %d", count);

    return 0;
}
