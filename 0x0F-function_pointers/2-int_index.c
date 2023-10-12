#include <stdio.h>

int int_index(int *array, int size, int (*cmp)(int)) {
    if (array == NULL || cmp == NULL || size <= 0) {
        return -1;
    }

    for (int i = 0; i < size; i++) {
        if (cmp(array[i])) {
            return i;
        }
    }

    return -1; // No match found
}

/* Example comparison function: find an even number */
int is_even(int number) {
    return number % 2 == 0;
}

int main(void) {
    int numbers[] = {1, 3, 6, 9, 10, 11};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int index = int_index(numbers, size, is_even);

    if (index != -1) {
        printf("First even number found at index %d: %d\n", index, numbers[index]);
    } else {
        printf("No even numbers found.\n");
    }

    return 0;
}

