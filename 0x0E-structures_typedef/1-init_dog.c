#include <stdio.h>

struct dog {
    char *name;
    float age;
    char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner) {
    if (d != NULL) {
        d->name = name;
        d->age = age;
        d->owner = owner;
    }
}

int main(void) {
    struct dog my_dog;  // Declare a struct dog variable

    // Initialize my_dog using the init_dog function
    init_dog(&my_dog, "Poppy", 3.5, "Bob");

    // Access and print the initialized values
    printf("My dog's name is %s, age is %.1f, and owner is %s.\n", my_dog.name, my_dog.age, my_dog.owner);

    return 0;
}

