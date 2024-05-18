#include <stdio.h>
#include <stdlib.h>

int main(){

    int matriz[2][3] = {{1,2,3},{4,5,6}};

    // Quando se usa uma variável externa pra atribuir o tamanha da matriz, não podemos atribuir valor ao seus elementos na mesma linhas.

    printf("\n&Matriz = %p, Matriz = %p\n\n", &matriz, matriz);

    // Para 'printarmos' todos os elementos de uma matriz usamos o seguinte esquema:
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            printf("Matriz[%d][%d] = %d, &Matriz[%d][%d] = %p\n", i, j, matriz[i][j], i, j, &matriz[i][j]);
        }
        puts("");
    }

    return 0;
}