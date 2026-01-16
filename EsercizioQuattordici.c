//
// Created by Asus on 16/01/2026.
//

#include "EsercizioQuattordici.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char autore[100];
    char testo[500];
}Commento;

typedef struct {
    Commento* commenti;
}Post;

typedef struct {
    Post* posts;
}Profilo;

void EsercizioQuattordici() {
    Profilo profilo;
    int numeroPost=3;
    int numeroCommenti=5;
    profilo.posts =(Post*) malloc(sizeof(Post)*numeroPost);

    for (int i = 0; i < numeroPost; i++) {
        profilo.posts[i].commenti = (Commento*) malloc(sizeof(Commento)*numeroCommenti);

        for (int x=0; x<numeroCommenti; x++) {
            strcpy(profilo.posts[i].commenti[x].autore, "autoread");
            strcpy(profilo.posts[i].commenti[x].testo, "testoasadd");

        }
    }

    int commentiTotale=0;
    /*
    for (int i = 0; i < numeroPost; i++) {
        for (int x=0; x<numeroCommenti; x++) {
            commentiTotale+=1;
        }
    }*/

    commentiTotale=numeroPost*numeroCommenti;
    printf("Commenti Totali:%d ",commentiTotale);

    for (int i = 0; i < numeroPost; i++) {
        free(profilo.posts[i].commenti);
        profilo.posts[i].commenti = NULL;
    }
    free(profilo.posts);
    profilo.posts = NULL;

}