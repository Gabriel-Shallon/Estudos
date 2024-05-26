#include <stdio.h>
#include <stdlib.h>

#define LINHAS 2
#define COLUNAS 3


void DesalocaMatriz2d(int *** matriz){

    for (int i = 0; i < LINHAS; i++){
       free((*matriz)[i]);
    }
    
    free(*matriz);
    free(matriz);

    *matriz = NULL;
    matriz = NULL;

}

int** ALocaMatriz2d(){
    //LINHAS
    int ** matriz = (int**) calloc(LINHAS, sizeof(int*));
    for (int i = 0; i < LINHAS; i++){
        //COLUNAS
        matriz[i] = (int*) calloc(COLUNAS, sizeof(int));
    }

    return matriz;
}

void PrintMatriz2d (int*** matriz){

    printf("&matriz = %p, matriz = %p\n\n", &(*matriz), *matriz);
        for (int i = 0; i < LINHAS; i++){
            printf("&matriz[%d] = %p, matriz[%d] = %p\n\n", i, &(*matriz)[i], i, (*matriz)[i]);
                for (int j = 0; j < COLUNAS; j++){
                    printf("&matriz[%d][%d] = %p, matriz[%d][%d] = %d\n\n", i, j, &(*matriz)[i][j], i, j, (*matriz)[i][j]);    
                }
            puts("");
        }

}

void AtribuirValorAMatriz2D (int** matriz){

    for (int i = 0; i < LINHAS; i++){
        for (int j = 0; j < COLUNAS; j++){
            matriz[i][j] = i+j;
        }
    }

}


int main(){

    int ** matriz2d = ALocaMatriz2d();
    AtribuirValorAMatriz2D(matriz2d);
    PrintMatriz2d(&matriz2d);


       DesalocaMatriz2d(&matriz2d);


    PrintMatriz2d(&matriz2d);

    return 0;
}
