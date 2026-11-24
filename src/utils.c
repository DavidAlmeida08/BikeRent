#include <stdio.h>
#include <stdlib.h>
#include "../headers/main.h"

void* safe_allocation(long long size) {
    void* pointer = malloc(size);
    if (pointer == NULL) {
        perror("Error allocating memory");
        exit(EXIT_FAILURE);
    }

    return pointer;
}

FILE* safe_fopen(char* path, char* mode) {
    FILE* f = fopen(path, mode);
    if (f == NULL) {
        printf("Error opening file: %s\n", path);
        exit(EXIT_FAILURE);
    }

    return f;
}
