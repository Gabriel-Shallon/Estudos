#include <stdio.h>

#define FATIAS 2
#define LINHAS 3
#define COLUNAS 4
//Assim que se define variáveis globais :)

//Para chamar uma matriz estática numa função, precisamos especificar o tamanho dela para o parâmetro:
void PrintMatriz3d(int (*matriz)[FATIAS][LINHAS][COLUNAS]) {
// (*matriz) para referencia, sem os parenteses, o * acaba abrangendo as medidas da matriz parametro (não funcionakk).

    printf("&matriz = %p, matriz = %p\n\n", &(*matriz), *matriz);
    for (int i = 0; i < FATIAS; i++) {
        printf("&matriz[%d] = %p, matriz[%d] = %p\n\n", i, &(*matriz)[i], i, (*matriz)[i]);
        for (int j = 0; j < LINHAS; j++) {
            printf("&matriz[%d][%d] = %p, matriz[%d][%d] = %p\n\n", i, j, &(*matriz)[i][j], i, j, (*matriz)[i][j]);
            for (int k = 0; k < COLUNAS; k++) {
                printf("&matriz[%d][%d][%d] = %p, matriz[%d][%d][%d] = %d\n", i, j, k, &(*matriz)[i][j][k], i, j, k, (*matriz)[i][j][k]);
            }
            puts("");
        }
        puts("");
    }

}




int main() {
    int matriz[FATIAS][LINHAS][COLUNAS] = {{{1,2,3,4},{5,6,7,8},{9,10,11,12}}, {{13,14,15,16},{17,18,19,20},{21,22,23,24}}};
    //mds kkkkkkkkkkkkkk
    
    PrintMatriz3d(&matriz);

    return 0;
}
