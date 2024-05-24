#include <stdio.h>
#include <stdlib.h>

#define LINHAS 2
#define COLUNAS 3




// PARTE IMPORTANTE DO CÓDIGO:
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DesalocaMatriz2d(int *** matriz){

// O free desaloca um vetor (1D).
// Para desalocar todos os vetores que criamos para formar uma matriz 2d, precisamos de 1 'for', apagando os vetores de 'dentro para fora'.

    for (int i = 0; i < LINHAS; i++){
        // Apagamos os valores que as fatias guardam, que no caso, são os endereços das colunas que as linhas guardam.
        free((*matriz)[i]);
    }
    // E por último, apagamos os valores que as fatias guardam, que nesse caso, são os endereços das linhas.
    free(*matriz);

    // Esse free adicional aqui é porque dentro dessa função, nós criamos meio que uma matriz 3d, que no caso, só guarda o endereço da matriz 2d. Fazemos isso para acessar os endereços reais da matriz, e não um parametro cópia, que não é a matriz real. 
    free(matriz);

    *matriz = NULL;
    matriz = NULL;

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




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

//PARTE IMPORTANTE DO CÓDIGO:
/////////////////////////////////////////

       DesalocaMatriz2d(&matriz2d);

/////////////////////////////////////////

    PrintMatriz2d(&matriz2d);

    return 0;
}
