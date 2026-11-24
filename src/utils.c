#include <stdio.h>
#include <stdlib.h>
#include "../headers/main.h"

FILE* safe_fopen(char* path, char* mode) {
    FILE* f = fopen(path, mode);
    if (f == NULL) {
        printf("Error opening file: %s\n", path);
        exit(EXIT_FAILURE);
    }

    return f;
}