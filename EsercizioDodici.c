#include "EsercizioDodici.h"

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

void EsercizioDodici() {
    Post post;
    post.commenti=NULL;
    int contatore=0;
    int capacita=0;

    char scelta;

    do {
        if (contatore == capacita) {
            capacita += 2;
            Commento* tmp = realloc(post.commenti, sizeof(Commento) * capacita);
            if (!tmp) {
                printf("Errore realloc\n");
                return;;
            }
            post.commenti = tmp;
        }

        printf("Autore: ");
        fgets(post.commenti[contatore].autore, 100, stdin);
        post.commenti[contatore].autore[strcspn(post.commenti[contatore].autore, "\n")] = '\0';

        printf("\nTesto: ");
        fgets(post.commenti[contatore].testo, 500, stdin);
        post.commenti[contatore].testo[strcspn(post.commenti[contatore].testo, "\n")] = '\0';

        contatore++;

        printf("Vuoi inserire un altro commento? (s/n): \n");
        scelta = getchar();
        getchar(); // consuma il \n rimasto
    } while (scelta == 's' || scelta == 'S');

    printf("\nCommenti inseriti:\n");
    for (int i = 0; i < contatore; i++) {
        printf("Autore: %s\nTesto: %s\n", post.commenti[i].autore, post.commenti[i].testo);
    }

    printf("Numero totale di commenti: %d\n", contatore);

    free(post.commenti);
    post.commenti = NULL;
}
