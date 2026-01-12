//
// Created by raffa on 12/01/2026.
//

#include "EsercizioCinque.h"
#include <stdio.h>
#include <stdlib.h>

int EsercizioCinque(void) {

    int N;
    int *array;

    printf("Inserisci il numero di elementi: ");
    scanf("%d", &N);

    array = (int *)malloc(N * sizeof(int));

    if (array == NULL) {
        printf("Errore allocazione mem\n");
        return 0;
    }

    for (int i = 0; i < N; i++) {
        printf("Inserisci il valore %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("\nValori prima:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    int contAppoggio=0;
    for (int i = 0; i < N; i++) {
        if (array[i] >=0) {
            array[contAppoggio]= array[i];
            contAppoggio++;
        }

    }

    printf("\nValori secondo elementi: %d\n", contAppoggio);

    int *temp = realloc(array, contAppoggio * sizeof(int));
    if (temp == NULL) {
        printf("Errore allocazione mem\n");
        free(array);
        return 0;
    }
    array = temp;


    printf("Valori dopo aver eliminato negativi:\n");

    for (int i = 0; i < contAppoggio; i++) {
        printf("%d ", array[i]);
    }

    free(array);
    array = NULL;

    return 0;
}