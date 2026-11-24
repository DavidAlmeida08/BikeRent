#include <stdio.h>
#include <stdlib.h>
#include "../headers/main.h"
#include "../headers/utils.h"

int main() {
    FILE* f = safe_fopen(BICICLETAS_TXT, "r");
    printf("%p", (void*)f);
    return 0;
}