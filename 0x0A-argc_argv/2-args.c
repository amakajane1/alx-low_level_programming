#include <stdio.h>

int main(int argc, char *argv[]) {
    // Loop through all command-line arguments
    for (int i = 0; i < argc; i++) {
        // Print each argument followed by a new line
        printf("%s\n", argv[i]);
    }

    return 0;
}

