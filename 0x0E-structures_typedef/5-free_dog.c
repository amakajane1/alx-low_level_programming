#include <stdio.h>
#include <stdlib.h>

typedef struct dog {
    char *name;
    float age;
    char *owner;
} dog_t;

void free_dog(dog_t *d) {
    if (d == NULL) {
        return; // Nothing to free
    }

    free(d->name);
    free(d->owner);
    free(d);
}

int main() {
    dog_t *my_dog = malloc(sizeof(dog_t));

    if (my_dog == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    my_dog->name = "Buddy";
    my_dog->age = 3.5;
    my_dog->owner = "Alice";

    free_dog(my_dog);

    return 0;
}

