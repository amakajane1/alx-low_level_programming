#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Check the number of arguments
    if (argc != 2) {
        printf("Error\n");
        return 1;
    }

    // Convert the argument to an integer
    int cents = atoi(argv[1]);

    // Check if the amount is negative
    if (cents < 0) {
        printf("0\n");
        return 0;
    }

    // Initialize the count of coins to zero
    int count = 0;

    // Calculate the number of coins needed
    while (cents > 0) {
        if (cents >= 25) {
            cents -= 25;
            count++;
        } else if (cents >= 10) {
            cents -= 10;
            count++;
        } else if (cents >= 5) {
            cents -= 5;
            count++;
        } else if (cents >= 2) {
            cents -= 2;
            count++;
        } else {
            cents -= 1;
            count++;
        }
    }

    // Print the minimum number of coins
    printf("%d\n", count);

    return 0;
}

