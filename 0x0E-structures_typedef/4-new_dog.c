#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct dog {
    char *name;
    float age;
    char *owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner) {
    dog_t *new_dog = malloc(sizeof(dog_t));

    if (new_dog == NULL) {
        return NULL; // Memory allocation failed
    }

    new_dog->name = strdup(name); // Duplicate name
    new_dog->age = age;
    new_dog->owner = strdup(owner); // Duplicate owner

    if (new_dog->name == NULL || new_dog->owner == NULL) {
        free(new_dog->name); // Free allocated memory
        free(new_dog->owner);
        free(new_dog);
        return NULL; // Memory allocation failed
    }

    return new_dog;
}

int main() {
    dog_t *my_dog = new_dog("Buddy", 3.5, "Alice");

    if (my_dog == NULL) {
        printf("Failed to create a new dog\n");
    } else {
        printf("Name: %s, Age: %.1f, Owner: %s\n", my_dog->name, my_dog->age, my_dog->owner);
        free(my_dog->name); // Free allocated memory
        free(my_dog->owner);
        free(my_dog);
    }

    return 0;
}

