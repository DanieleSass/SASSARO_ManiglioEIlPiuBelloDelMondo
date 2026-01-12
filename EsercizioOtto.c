//
// Created by raffa on 12/01/2026.
//

#include "EsercizioOtto.h"

#include <stdio.h>
#include <stdlib.h>

typedef struct Persona {
  char nome [100];
  int eta;
};
int EsercizioOtto(void) {
  struct Persona* persona;
  persona = (struct Persona*)malloc(sizeof(struct Persona));

  printf("nome\n");
  fgets(persona->nome,100,stdin);

  printf("eta\n");
  scanf("%d",&persona->eta);

  printf("Nome: %s, eta %d", persona->nome, persona->eta);

  free(persona);
  persona=NULL;
  return 0;
}