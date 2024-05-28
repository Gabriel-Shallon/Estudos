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
    
    for(int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            (*matrix)[i][j] = (i + j) % 2;
            // Esse calculo é relativamente pesado para a cpu
            // Mas como estamos usando o metodo row-major (default para o 'C'), o tempo de execução é ok :)
            // Mesmo tendo 50000 linhas e 10000 colunaskkkkkkkk
        }    
    }
}

//////////////////////////////////////////////

int main(){

    int** matrix = CreateMatrix();
    Operation(&matrix);
    
    return 0;
}