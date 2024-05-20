#include <stdio.h>
#include <stdlib.h>


int main(){

    int linhas = 2;
    int colunas = 3;

    int** matriz = (int**) calloc(linhas, sizeof(int*));

    //Para cada linha da matriz:
    for (int i = 0; i < linhas; i++){
        matriz[i] = (int*) calloc(colunas, sizeof(int));
    }


    printf("&matriz = %p, matriz = %p\n\n", &matriz, matriz);

    int count = 0;
    for (int i = 0; i < linhas; i++){
        printf("&matriz[%d] = %p, matriz[%d] = %p\n\n", i, &matriz[i], i, matriz[i]);

        for (int j = 0; j < colunas; j++){

            matriz[i][j] = count++;

            printf("&matriz[%d][%d] = %p, matriz[%d][%d] = %d\n", i, j, &matriz[i][j], i, j, matriz[i][j]);
        }
        puts("");
    }

    // Falta desalocar a matriz dinâmica, mas ainda não vi issokkkk

    return 0;
}