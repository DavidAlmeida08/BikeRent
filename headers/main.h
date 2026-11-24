#ifndef BIKERENT_H
#define BIKERENT_H

#include <stdint.h>

#define BICICLETAS_TXT "instalation_files/Bicicletas_instalacao.txt"
#define TARIFARIO_TXT "instalation_files/Tarifario_instalacao.txt"

#define MAX_CAPACITY
#define DAILY_LIMIT
#define LONG_TERM_DISCOUNT

typedef struct{
    char* type;
    int id;
    char state;
} BIKE;

#endif // BIKERENT_H
