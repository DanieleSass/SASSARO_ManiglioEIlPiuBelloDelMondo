//
// Created by raffa on 12/01/2026.
//

#include "EsercizioOtto.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Persona {
  char nome [100];
  int eta;
};
void EsercizioOtto(void) {
  struct Persona* persona;
  persona = (struct Persona*)malloc(sizeof(struct Persona));

  if (persona==NULL) {
  printf("Errore allocazione da memoria");
    return;
  }

  printf("nome\n");
  fgets(persona->nome,100,stdin);
  persona->nome[strcspn(persona->nome, "\n")] = '\0';

  printf("eta\n");
  scanf("%d",&persona->eta);

  printf("Nome: %s, eta %d", persona->nome, persona->eta);

  free(persona);
  persona=NULL;
  return;
}