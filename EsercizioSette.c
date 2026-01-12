//
// Created by raffa on 12/01/2026.
//

#include "EsercizioSette.h"
#include <stdio.h>

typedef struct Data {
    int giorno;
    int mese;
    int anno;

};

void EsercizioSette() {
    struct Data data1;
    struct Data data2;
    data1.giorno = 1;
    data1.mese = 12;
    data1.anno = 2025;

    data2.giorno = 1;
    data2.mese = 12;
    data2.anno = 2025;
}

struct Data Confronta(struct Data d1, struct Data d2) {
    if (d1.anno>d2.anno) {
        return d1;
    }
    else if (d1.anno<d2.anno) {
        return d2;
    }
    else if (d1.anno==d2.anno) {
        if (d1.mese>d2.mese) {
            return d1;
        }
        else if (d1.mese<d2.mese) {
            return d2;
        }
        else if (d1.mese==d2.mese) {
            if (d1.giorno>d2.giorno) {
                return d1;
            }
            else if (d1.giorno<d2.giorno) {
                return d2;
            }
            else if (d1.giorno==d2.giorno) {
                    //COMPELTAMENTE IDENTICHE, ritorna la prima
                return d1;
            }
        }
    }
}