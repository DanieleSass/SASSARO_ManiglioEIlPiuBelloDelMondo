//
// Created by Asus on 16/01/2026.
//

#include "EsercizioUndici.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[100];
    int punreggio;
}Giocatore;

typedef struct {
    Giocatore* squadra;
}Squadra;

void EsercizioUndici() {
    Squadra squadra;
    int cont=0;
    squadra.squadra = (Giocatore*)malloc(sizeof(Giocatore)*10);

    Giocatore giocatore1;
    Giocatore giocatore2;
    Giocatore giocatore3;


    strcpy(giocatore1.nome, "player1");
    giocatore1.punreggio= 2;
    squadra.squadra[0]=giocatore1;
    cont++;

    strcpy(giocatore2.nome, "player2");
    giocatore2.punreggio= 3;
    squadra.squadra[1]=giocatore2;
    cont++;

    strcpy(giocatore3.nome, "player3");
    giocatore3.punreggio= 4;
    squadra.squadra[2]=giocatore3;
    cont++;

    int somma=0;
    for (int i = 0; i < cont; i++) {
        somma+=squadra.squadra[i].punreggio;
    }
    printf("Punti totali = %d\n", somma);

    free(squadra.squadra);
    squadra.squadra=NULL;
}