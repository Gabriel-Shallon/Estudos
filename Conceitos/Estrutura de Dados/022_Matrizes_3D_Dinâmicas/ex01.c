#include <stdio.h>
#include <stdlib.h>

#define FATIAS 2
#define LINHAS 3
#define COLUNAS 4
//Assim que se define variáveis globais :)


void PrintMatriz3d (int**** matriz){
// O parametro é um ponteiro com endereço da matriz, para podermos ver os valores reais da matriz que está fora da função. (Passagem por Referencia)

    // Para 'desreferenciar' a matriz, que tem seu endereço guardado pelo parametro ponteiro, colocamos ela entre parentesses, para ser desreferenciada primeiro, antes do indice, pois caso contrário, o o sistema vai tentar desreferenciar o indice também.
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

// Para desalocar uma matriz 3d usamos o seguinte esquema:
void DesalocaMatriz3D(int**** matriz) {
    
    for (int i = 0; i < FATIAS; i++) {
        for (int j = 0; j < LINHAS; j++) {
            free((*matriz)[i][j]);
        }
        free((*matriz)[i]);
    }
    free(*matriz);
    
    
    *matriz = NULL;

}



int main(){

    //Fatias
    int*** matriz = (int***) calloc(FATIAS, sizeof(int**));

    //Linhas
    for (int i = 0; i < FATIAS; i++){
        matriz[i] = (int**) calloc(LINHAS, sizeof(int*));
    }

    //Colunas
    for (int i = 0; i < FATIAS; i++){
        for (int j = 0; j < LINHAS; j++){
            matriz[i][j] = (int*) calloc(COLUNAS, sizeof(int));
        }
    }

    AtribuirValorAMatriz3D(matriz);
    //Atribuir valor não precisa ser por referencia pois o endereço final onde esses valores vão ser atribuidos são os mesmos que os da nossa matriz aqui na main, mesmo o endereço base do parametro sendo diferente. (Como o o parametro é um ponteiro de ponteiros de ponteiros de inteiros, ele vai guardar os mesmo endereços que a matriz aqui, mesmo que seu local base na memória seja diferente.) 
    PrintMatriz3d(&matriz);
    DesalocaMatriz3D(&matriz);


    // Falta desalocar a matriz dinâmica, mas ainda não vi issokkkk

    return 0;
}