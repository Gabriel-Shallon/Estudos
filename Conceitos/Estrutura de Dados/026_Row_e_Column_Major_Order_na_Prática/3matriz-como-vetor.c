#include <stdio.h>
#include <stdlib.h>

#define LINHAS 50000
#define COLUNAS 10000
#define ELEMENTOS (LINHAS*COLUNAS)



int* CreateMatrizComoVetor(){

    int* matrix;
    matrix = (int*) calloc(ELEMENTOS, sizeof(int));
    

    return matrix;
}


//////////////////////////////////////////////

void Operation(int** matrix){
    
    for(int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            int p = (i * COLUNAS) + j;
            // 'p' é a conversão do indice duplo de uma matriz convencional para um indice único de um vetor.

            (*matrix)[p] = (i + j) % j;
        }    
    }
}

//////////////////////////////////////////////


int main(){

    int* matrix = CreateMatrizComoVetor();
    Operation(&matrix);
    
    return 0;
}