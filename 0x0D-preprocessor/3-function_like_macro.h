#include <stdio.h>

#define ABS(x) ((x) < 0 ? -(x) : (x))

int main(void) {
    int number = -5;
    int absValue = ABS(number);
    printf("Absolute value of %d is %d\n", number, absValue);
    return 0;
}

