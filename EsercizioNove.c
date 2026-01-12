//
// Created by raffa on 12/01/2026.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Dipendente {
  char nome[100];
  int anniServizio;
  float stipendio;
};

#include "EsercizioNove.h"

int EsercizioNove(void) {

  int grandezzaLista=3;

  struct Dipendente** lista;
  //lista di 3 elemneti
  lista= (struct Dipendente**)malloc(sizeof(struct Dipendente*) * grandezzaLista);

  struct Dipendente* dip1;
  struct Dipendente* dip2;
  struct Dipendente* dip3;


  dip1 = (struct Dipendente*)malloc(sizeof(struct Dipendente));
  dip2 = (struct Dipendente*)malloc(sizeof(struct Dipendente));
  dip3 = (struct Dipendente*)malloc(sizeof(struct Dipendente));


  strcpy(dip1->nome, "nome1");
  dip1->anniServizio=10;
  dip1->stipendio=3400;

  strcpy(dip2->nome, "nome2");
  dip2->anniServizio=15;
  dip2->stipendio=2400;

  strcpy(dip3->nome, "nome3");
  dip3->anniServizio=8;
  dip3->stipendio=1400;

  lista[0]=dip1;
  lista[1]=dip2;
  lista[2]=dip3;

  for (int i =0; i < grandezzaLista; i++) {
    if (lista[i]->anniServizio >10) {
      printf("Nome: %s ;anni di servizio %d ",lista[i]->nome , lista[i]->anniServizio);
    }
  }

  for (int i =0; i < grandezzaLista; i++) {
    free(lista[i]);
    lista[i]=NULL;
  }

  return 0;
}