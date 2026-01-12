//
// Created by raffa on 12/01/2026.
//

#include "EsercizioDue.h"

void EsercizioDue(int* ore, int* minuti,int* secondi, int secondireal) {
    *ore=secondireal/3600;
    secondireal%=3600;
    *minuti=secondireal/60;
    secondireal%=60;
    *secondi=secondireal%600;
}