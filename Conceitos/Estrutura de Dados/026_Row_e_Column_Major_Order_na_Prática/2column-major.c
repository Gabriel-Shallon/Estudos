#include <stdio.h>
#include <stdlib.h>

#define LINHAS 50000
#define COLUNAS 10000

int** CreateMatrix(){

    int** matrix;
    matrix = (int**) calloc(LINHAS, sizeof(int*));
    for(int i = 0; i < LINHAS; i++){
        matrix[i] = (int*) calloc(COLUNAS, sizeof(int));
    }

    return matrix;
}

//////////////////////////////////////////////

void Operation(int*** matrix){
    
    for(int j = 0; j < COLUNAS; j++){
        for(int i = 0; i < LINHAS; i++){
            (*matrix)[i][j] = (i + j) % 2;
            // Nessa segunda versão do código trocamos a ordem dos for, oque muda a execução para column-major
            // Apenas mudando essa ordem, o tempo de execução do programa vai ficar >muito maior<
            // Para testar a diferença é apenas necessário executar um após o outro e comparar o tempo que leva para terminar a execução
        }    
    }
}

//////////////////////////////////////////////

int main(){

    int** matrix = CreateMatrix();
    Operation(&matrix);
    
    return 0;
}