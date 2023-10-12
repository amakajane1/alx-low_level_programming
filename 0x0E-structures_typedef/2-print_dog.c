#include <stdio.h>
#include "dog.h" // Assuming you have a dog.h header file with the struct definition

void print_dog(struct dog *d) {
    if (d != NULL) {
        printf("Name: %s\n", d->name ? d->name : "(nil)");
        printf("Age: %.6f\n", d->age);
        printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
    }
}

int main(void) {
    struct dog my_dog = { "Buddy", 3.5, "Alice" };

    print_dog(&my_dog);

    return 0;
}

