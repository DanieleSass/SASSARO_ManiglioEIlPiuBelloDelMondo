//
// Created by raffa on 12/01/2026.
//

#include "EsercizioDieci.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct  {
    char titolo[100];
    int pagine;
} Libro;

typedef struct {
    Libro** lista;
    //struct Libro** lista=(struct Libro**) malloc(sizeof(struct Libro*)*5);
}Libreria;

void MostraLibreria(Libro**, int);
void AggiungiLibro(Libro***, int* , int*);


void EsercizioDieci(void) {
    Libreria libreria;
    //libreria.lista = (Libro**) malloc(sizeof(Libro*)*1);
    libreria.lista = NULL;
    int scelta;
    int contatoreElementi=0;
    int contatoreCapacita=0;

    do {
        printf("1 per mostrare lista, 2 per aggiungere, 0 (o qualsiasi altra roba) esci \n");
        scanf("%d", &scelta);
        getchar();

        switch (scelta) {
            case 1:
                MostraLibreria(libreria.lista, contatoreElementi);
                break;
            case 2:
                AggiungiLibro(&libreria.lista, &contatoreElementi, &contatoreCapacita);
                break;
        }
    }while (scelta!=0);

    for (int i = 0; i < contatoreElementi; i++) {
        free(libreria.lista[i]);
        libreria.lista[i] = NULL;
    }
    free(libreria.lista);
    libreria.lista = NULL;

    return;
}

void AggiungiLibro(Libro*** lista, int* cont, int* capacita) {
    if (*cont == *capacita) {
        *capacita +=3;

        Libro** tmp = realloc(*lista, sizeof(Libro*) * (*capacita));
        if (tmp == NULL) {
            printf("Errore realloc\n");
            return;
        }
        *lista = tmp;
    }
        (*lista)[*cont]=malloc(sizeof(Libro));


        printf("Metti titolo\n");
        fgets((*lista)[*cont]->titolo, 100, stdin);
    (*lista)[*cont]->titolo[strcspn((*lista)[*cont]->titolo, "\n")] = '\0';

        printf("Metti pagine \n");
        scanf("%d", &(*lista)[*cont]->pagine);
        getchar();

    (*cont)++;
}

void MostraLibreria(Libro** lista, int cont) {

    if (cont==0) {
        printf("Vuota\n");
        return;
    }

    for (int i=0; i<cont; i++) {
        printf("Titolo: %s - Pagine: %d \n", lista[i]->titolo, lista[i]->pagine);
    }
}