#include <stdio.h>

#define SUM(x, y) ((x) + (y))

int main(void) {
    int a = 5;
    int b = 7;
    int result = SUM(a, b);
    printf("The sum of %d and %d is %d\n", a, b, result);
    return 0;
}

