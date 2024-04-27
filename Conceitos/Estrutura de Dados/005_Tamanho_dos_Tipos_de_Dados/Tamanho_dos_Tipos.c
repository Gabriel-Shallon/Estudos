#include <stdio.h>

int main(){

    int a;

    printf("sizeof(a) = %ld bytes\n", sizeof(a));
    printf("sizeof(int) = %ld bytes\n", sizeof(int));
    printf("sizeof(short) = %ld bytes\n", sizeof(short));
    printf("sizeof(long) = %ld bytes\n", sizeof(long));
    printf("sizeof(float) = %ld bytes\n", sizeof(float));
    printf("sizeof(double) = %ld bytes\n\n", sizeof(double));

    
    printf("sizeof(void *) = %ld bytes\n", sizeof(void *));
    printf("sizeof(int *) = %ld bytes\n", sizeof(int *));
    printf("sizeof(int **) = %ld bytes\n", sizeof(int **));
    printf("sizeof(int ***) = %ld bytes\n", sizeof(int ***));
    printf("sizeof(float *) = %ld bytes\n", sizeof(float *));

    return 0;
}

// Não tem muito oque explicarkkkkkk
// São os tamanhos em bytes dos tipos de dados! :D

// gcc Tamanho_dos_Tipos.c -o Tamanho_dos_Tipos
// ./Tamanho_dos_Tipos