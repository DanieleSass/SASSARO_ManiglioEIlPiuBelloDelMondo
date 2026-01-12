#include <stdio.h>
#include <stdlib.h>

int EsercizioQuattro(void) {
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

    printf("\nValori:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    free(array);
    array=NULL;
    return 0;
}
