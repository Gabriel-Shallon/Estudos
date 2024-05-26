#include <stdio.h>
#include <stdlib.h>


int** createIntMatrix(int rows, int coluns){
    //LINHAS
    int ** matriz = (int**) calloc(rows, sizeof(int*));
    for (int i = 0; i < rows; i++){
        //COLUNAS
        matriz[i] = (int*) calloc(coluns, sizeof(int));
    }

    return matriz;
}

void valueIntMatrix(int*** matrix, int rows, int coluns){
    
    int count = 0;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < coluns; j++){
            (*matrix)[i][j] = count++;
        } 
    }
}


void PrintMatrix (int*** matriz, int rows, int cols){

    printf("&matriz = %p, matriz = %p\n\n", &(*matriz), *matriz);
        for (int i = 0; i < rows; i++){
            printf("&matriz[%d] = %p, matriz[%d] = %p\n\n", i, &(*matriz)[i], i, (*matriz)[i]);
                for (int j = 0; j < cols; j++){
                    printf("&matriz[%d][%d] = %p, matriz[%d][%d] = %d\n\n", i, j, &(*matriz)[i][j], i, j, (*matriz)[i][j]);    
                }
            puts("");
        }

}

void addEscalar(int*** matrix, int rows, int coluns, int scalar){
    
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < coluns; j++){
            (*matrix)[i][j] += scalar;
        } 
    }
}

void desalocarMatrix(int*** matrix, int rows){
    
    for (int i = 0; i < rows; i++){
        free((*matrix)[i]);    
    }
    free(*matrix);
    free(matrix);
    *matrix = NULL;
    matrix = NULL:

}

int main(int argc, char* argv[]){

    if (argc != 4){
        printf("ERROR\nQuatro argumentos sao esperados.\n");
        exit(-1);
        // Esse -1 é um apenas um código de erro genérico que o sistema recebe na hora de fechar o programa
    } // Esse 'if' verifica se a quantidade de argumentos está correta (no caso, queremos 2 argumentos (o primeiro é default), o número de linhas e de colunas).

    printf("argc = %d\n\n", argc);
    for(int i = 0; i < argc; i++){
        printf("argv[%d] = %s\n", i, argv[i]);
    }

    int rows = atoi(argv[1]);
    int cols = atoi(argv[2]);
    int scalar = atoi(argv[3]);
    // Essa função 'atoi' transforma uma string em um valor inteiro :D

    printf("rows = %d, cols = %d\n\n", rows, cols);
 
    int** matrix = createIntMatrix(rows, cols);
    valueIntMatrix(&matrix, rows, cols);
    PrintMatrix(&matrix, rows, cols);
    addEscalar(&matrix, rows, cols, scalar);
    PrintMatrix(&matrix, rows, cols);
    desalocarMatrix(&matrix, rows);


    return 0;
}

