#include <string.h>

char *_strncat(char *dest, char *src, int n) {
    int dest_len = strlen(dest); // Use the standard strlen function
    int i;

    for (i = 0; src[i] != '\0' && i < n; i++) {
        dest[dest_len + i] = src[i];
    }

    dest[dest_len + i] = '\0';

    return dest;
}

