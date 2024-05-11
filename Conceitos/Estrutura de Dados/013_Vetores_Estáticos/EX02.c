#include <stdio.h>

int main(){

   int v[5];
   // 20 Bytes

    for(int i = 0; i < 5; i++){
        scanf("%d", &v[i]);
    }

    // Quando chamamos um indice de v, (v[i]) basicamente pedimos o conteúdo de um ponteiro.
    // No caso acima, estamos adicionando um valor no conteúdo de cada indice do vetor. (Indices de vetores são basicamente ponteiros)
}