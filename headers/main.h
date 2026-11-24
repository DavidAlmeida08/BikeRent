#ifndef BIKERENT_H
#define BIKERENT_H

#include <stdint.h>

#define BICICLETAS_TXT "instalation_files/Bicicletas_instalacao.txt"
#define TARIFARIO_TXT "instalation_files/Tarifario_instalacao.txt"

#define MAX_CAPACITY 50   //30+(92%5)*10 -- NN=(35091+35092+35094)%100= 92
#define DAILY_LIMIT 8   //6+(92%3) 
#define LONG_TERM_DISCOUNT 5   //5+(92%4)*5

typedef struct{
    char* type;
    int id;
    char state;
} BIKE;

#endif // BIKERENT_H
