#include <string.h>

char *_strcat(char *dest, char *src) {
    int dest_len = strlen(dest); // Use the standard strlen function
    int i;

    for (i = 0; src[i] != '\0'; i++) {
        dest[dest_len + i] = src[i];
    }
    
    dest[dest_len + i] = '\0';

    return dest;
}

