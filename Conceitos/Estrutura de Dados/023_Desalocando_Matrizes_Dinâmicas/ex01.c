#include <stdio.h>
#include <stdlib.h>

#define FATIAS 2
#define LINHAS 3
#define COLUNAS 4



// PARTE IMPORTANTE DO CÓDIGO:
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DesalocaMatriz3d(int **** matriz){

// O free desaloca um vetor (1D).
// Para desalocar todos os vetores que criamos para formar uma matriz 3d, precisamos de 2 'for's, apagando os vetores de 'dentro para fora'.

    for (int i = 0; i < FATIAS; i++){
        for(int j = 0; j < LINHAS; i++){
            // Cada linha tem várias colunas, então, nesse 'for' aqui, damos free em cada coluna de cada linha (basicamente apagamos os 'int's armazenados em cada colunas).
            free((*matriz)[i][j]);
        }
        // Após apagarmos os valores das linhas, apagamos os valores que as fatias guardam, que no caso, são os endereços das colunas que as linhas guardam.
        free((*matriz)[i]);
    }
    // E por último, apagamos os valores que as fatias guardam, que nesse caso, são os endereços das linhas.
    free(*matriz);

    // Esse free adicional aqui é porque dentro dessa função, nós criamos meio que uma matriz 4d, que no caso, só guarda o endereço da matriz 3d. Fazemos isso para acessar os endereços reais da matriz, e não um parametro cópia, que não é a matriz real. 
    free(matriz);

    *matriz = NULL;
    matriz = NULL;

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




int*** ALocaMatriz3d(){
    //Fatias
    int *** matriz = (int***) calloc(FATIAS, sizeof(int**));
    for (int i = 0; i < FATIAS; i++){
        //Linhas
        matriz[i] = (int**) calloc(LINHAS, sizeof(int*));
        for(int j = 0; j < LINHAS; j++){
            //Colunas
            matriz[i][j] = (int*) calloc(COLUNAS, sizeof(int));
        }
    }

    return matriz;
}

void PrintMatriz3d (int**** matriz){

    printf("&matriz = %p, matriz = %p\n\n", &(*matriz), *matriz);
        for (int i = 0; i < FATIAS; i++){
            printf("&matriz[%d] = %p, matriz[%d] = %p\n\n", i, &(*matriz)[i], i, (*matriz)[i]);
                for (int j = 0; j < LINHAS; j++){
                    printf("&matriz[%d][%d] = %p, matriz[%d][%d] = %p\n\n", i, j, &(*matriz)[i][j], i, j, (*matriz)[i][j]);
                        for (int k = 0; k < COLUNAS; k++){
                            printf("&matriz[%d][%d][%d] = %p, matriz[%d][%d][%d] = %d\n", i, j, k, &(*matriz)[i][j][k], i, j, k, (*matriz)[i][j][k]);
                        }
                    puts("");
                }
            puts("");
        }

}

void AtribuirValorAMatriz3D (int*** matriz){

    for (int i = 0; i < FATIAS; i++){
        for (int j = 0; j < LINHAS; j++){
            for (int k = 0; k < COLUNAS; k++){
                matriz[i][j][k] = i+j+k;            
            }
        }
    }

}


int main(){

    int *** matriz3d = ALocaMatriz3d();
    AtribuirValorAMatriz3D(matriz3d);
    PrintMatriz3d(&matriz3d);

//PARTE IMPORTANTE DO CÓDIGO:
/////////////////////////////////////////

       DesalocaMatriz3d(&matriz3d);

/////////////////////////////////////////

    PrintMatriz3d(&matriz3d);

    return 0;
}
