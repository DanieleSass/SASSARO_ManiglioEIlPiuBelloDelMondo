//
// Created by Asus on 16/01/2026.
//

#include "EsercizioTredici.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[100];
    int goal;
}Giocatore;

typedef struct {
  char nome[100];
    Giocatore *giocatori;
}Squadra;

typedef struct {
    Squadra* squadre;
}Campionato;

void EsercizioTredici() {
    Campionato campionato;
    int numeroSquadre;
    int* numeroGiocatori;   //array perchè squadre potrebbereo avere numeri diversi

    do {
        printf("Numero squadre: ");
        scanf("%d", &numeroSquadre);
        getchar();
        if (numeroSquadre <= 0)
            printf("Deve essere un numero positivo\n");
    } while (numeroSquadre <= 0);

    campionato.squadre = (Squadra*)malloc(sizeof(Squadra)*numeroSquadre);

    if (campionato.squadre == NULL) {
        printf("Errore allocazione da memoria\n");
        return;
    }

    numeroGiocatori = (int*) malloc(sizeof(int) * numeroSquadre);

    for (int i = 0; i < numeroSquadre; i++) {
        printf("Nome squadra: ");
        fgets(campionato.squadre[i].nome, 100, stdin);
        campionato.squadre[i].nome[strcspn(campionato.squadre[i].nome, "\n")] = '\0';

        do {
            printf("Numero giocatori per questa squadra: ");
            scanf("%d", &numeroGiocatori[i]);
            getchar();
            if (numeroGiocatori[i] <= 0)
                printf("Deve essere un numero positivo\n");
        } while (numeroGiocatori[i] <= 0);

        campionato.squadre[i].giocatori = (Giocatore*) malloc(sizeof(Giocatore) * numeroGiocatori[i]);
        if (campionato.squadre[i].giocatori==NULL) {
            printf("Errore allocazione da memoria\n");
            return;
        }

        for (int x=0; x < numeroGiocatori[i]; x++) {
            printf("Nome Giocatore: ");
            fgets(campionato.squadre[i].giocatori[x].nome, 100, stdin);
            campionato.squadre[i].giocatori[x].nome[strcspn(campionato.squadre[i].giocatori[x].nome, "\n")] = '\0';

            do {
                printf("Numero Gol segnati: ");
                scanf("%d", &campionato.squadre[i].giocatori[x].goal);
                getchar();
                if (campionato.squadre[i].giocatori[x].goal < 0)
                    printf("Deve essere un numero positivo!\n");
            } while (campionato.squadre[i].giocatori[x].goal < 0);

        }
    }

    int golTotali=0;
    for (int i = 0; i < numeroSquadre; i++) {
        for (int c=0; c < numeroGiocatori[i]; c++) {
            golTotali+=campionato.squadre[i].giocatori[c].goal;
        }
    }

    for (int i = 0; i < numeroSquadre; i++) {
        free(campionato.squadre[i].giocatori);
        campionato.squadre[i].giocatori = NULL;
    }
    free(campionato.squadre);
    campionato.squadre = NULL;

    free(numeroGiocatori);
    numeroGiocatori = NULL;


    printf("Numero gol totali: %d", golTotali);

    return;
}