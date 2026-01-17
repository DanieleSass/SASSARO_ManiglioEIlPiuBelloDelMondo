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

struct Data Confronta(struct Data, struct Data);

void EsercizioSette() {
    struct Data data1;
    struct Data data2;
    data1.giorno = 4;
    data1.mese = 03;
    data1.anno = 1995;

    data2.giorno = 17;
    data2.mese = 03;
    data2.anno = 1995;

    struct Data dataFinale = Confronta(data1, data2);

    printf("La data piu' recente e' %d/%d/%d \n", dataFinale.giorno, dataFinale.mese, dataFinale.anno);

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
//per sicurezza
    return d1;
}