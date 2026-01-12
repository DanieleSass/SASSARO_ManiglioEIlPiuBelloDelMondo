#include <stdio.h>
void EsercizioUno(int, int, int* , int* );
void EsercizioDue(int*, int*,int*, int);
//void EsercizioTre(int *, int*);
int Main(void) {
    int quoziente, resto;
    EsercizioUno(3,3, &quoziente, &resto);
    printf("Quoziente: %d Resto: %d\n", quoziente, resto);


    int ore, minuti, secondi;
    EsercizioDue(&ore,&minuti,&secondi, 3700);
    printf("Ore: %d Minuti: %d Secondi: %d\n", ore, minuti, secondi);

    int numeroUno;
    int numeroDue;
    //EsercizioTre(&numeroUno, &numeroDue);
    return 0;
}

void EsercizioUno(int a, int b, int* quoziente, int* resto) {
    *quoziente = a/b;
    *resto = a%b;
}

void EsercizioDue(int* ore, int* minuti,int* secondi, int secondireal) {
    *ore=secondireal/3600;
    secondireal%=3600;
    *minuti=secondireal/60;
    secondireal%=60;
    *secondi=secondireal%600;
}