//
// Created by raffa on 12/01/2026.
//

#include "EsercizioTre.h"

void EsercizioTre(int *a, int *b) {
    int aa = *a;
    int bb = *b;

    int risA=1;
    int risB=1;

    for (int i=0; i< bb; i++) {
        risA *= aa;
    }

    for (int i=0; i< aa; i++) {
        risB *= bb;
    }
    *a = risA;
    *b = risB;

}