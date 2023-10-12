#include <stdio.h>

void print_name(char *name, void (*f)(char *)) {
    if (name != NULL && f != NULL) {
        f(name);
    }
}

/* Example of a function to print a name */
void print_uppercase(char *name) {
    while (*name) {
        if (*name >= 'a' && *name <= 'z') {
            putchar(*name - ('a' - 'A'));
        } else {
            putchar(*name);
        }
        name++;
    }
    putchar('\n');
}

int main(void) {
    char myName[] = "John";
    
    printf("Original name: %s\n", myName);
    
    printf("Uppercase name: ");
    print_name(myName, print_uppercase);
    
    return 0;
}

