#include <stdio.h>

void array_iterator(int *array, size_t size, void (*action)(int)) {
    if (array != NULL && action != NULL) {
        for (size_t i = 0; i < size; i++) {
            action(array[i]);
        }
    }
}

/* Example of a function to perform an action on an element */
void print_square(int number) {
    printf("%d^2 = %d\n", number, number * number);
}

int main(void) {
    int numbers[] = {1, 2, 3, 4, 5};
    size_t size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Original numbers: ");
    for (size_t i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    printf("Squares: \n");
    array_iterator(numbers, size, print_square);

    return 0;
}

