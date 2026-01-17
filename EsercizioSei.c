//
// Created by raffa on 12/01/2026.
//

#include "EsercizioSei.h"
#include <stdio.h>
# include <string.h>
typedef struct Persona {
    char nome[50];
    char cognome[50];
    int eta;
};

void EsercizioSei() {

    struct Persona persona1;

    printf("Nome persona\n");
    fgets(persona1.nome, sizeof(persona1.nome), stdin);
    //trova prima occorrenza del \n e lo cambia con char terminatore
    persona1.nome[strcspn(persona1.nome, "\n")] = '\0';

    printf("Cognome persona\n");
    fgets(persona1.cognome, sizeof(persona1.cognome), stdin);
    persona1.cognome[strcspn(persona1.nome, "\n")] = '\0';

    printf("Eta persona\n");
    scanf("%d", &persona1.eta);

    printf("Nome %s; Cognome %s; Eta %d", persona1.nome, persona1.cognome, persona1.eta);
}