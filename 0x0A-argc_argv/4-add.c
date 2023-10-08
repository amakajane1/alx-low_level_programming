#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    if (argc == 1) {
        // No arguments provided, print 0 and return 0
        printf("0\n");
        return 0;
    }

    int sum = 0;

    for (int i = 1; i < argc; i++) {
        char *arg = argv[i];

        for (int j = 0; arg[j] != '\0'; j++) {
            // Check if the character is a digit or the first character is '-'
            if (!isdigit(arg[j]) && !(j == 0 && arg[j] == '-')) {
                // Invalid character found, print Error and return 1
                printf("Error\n");
                return 1;
            }
        }

        // Convert the argument to an integer and add to the sum
        sum += atoi(arg);
    }

    // Print the sum followed by a new line
    printf("%d\n", sum);

    return 0;
}

