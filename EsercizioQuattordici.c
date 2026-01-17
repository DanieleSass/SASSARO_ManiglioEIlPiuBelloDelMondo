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
    int* numeroCommentiPerPost = malloc(sizeof(int) * numeroPost);

    if (numeroCommentiPerPost == NULL) {
        printf("Errore allocazione memoria\n");
        return;
    }

    profilo.posts =(Post*) malloc(sizeof(Post)*numeroPost);

    if (profilo.posts==NULL) {
        printf("Errore allocazione da memoria");
        return;
    }

    for (int i = 0; i < numeroPost; i++) {
        printf("Quanti commenti per il post %d?", i+1);
        scanf("%d", &numeroCommentiPerPost[i]);
        getchar(); //toglie \n
    }


    for (int i = 0; i < numeroPost; i++) {
        profilo.posts[i].commenti = (Commento*) malloc(sizeof(Commento)*numeroCommentiPerPost[i]);

        if (profilo.posts[i].commenti==NULL) {
            printf("Errore allocazione da memoria");
            return;
        }

        for (int x=0; x < numeroCommentiPerPost[i]; x++) {
            strcpy(profilo.posts[i].commenti[x].autore, "autoread");
            strcpy(profilo.posts[i].commenti[x].testo, "testoasadd");

        }
    }

    int commentiTotale=0;

    for (int i = 0; i < numeroPost; i++) {
        commentiTotale+=numeroCommentiPerPost[i];
    }

    printf("Commenti Totali:%d ",commentiTotale);

    for (int i = 0; i < numeroPost; i++) {
        free(profilo.posts[i].commenti);
        profilo.posts[i].commenti = NULL;
    }
    free(numeroCommentiPerPost);
    free(profilo.posts);
    profilo.posts = NULL;

}