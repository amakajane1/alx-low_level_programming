char *_strcpy(char *dest, char *src) {
    char *original_dest = dest;
    while ((*dest = *src) != '\0') {
        dest++;
        src++;
    }
    return original_dest;
}

