#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Check if the program received exactly two arguments
    if (argc != 3) {
        printf("Error\n");
        return 1; // Return 1 to indicate an error
    }

    // Convert the command-line arguments to integers
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    // Calculate the result of the multiplication
    int result = num1 * num2;

    // Print the result followed by a new line
    printf("%d\n", result);

    return 0; // Return 0 to indicate success
}

