#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor1[5] = {0, 1, 2, 3, 4};
    int *vetor2, *ponteiro;
    int i;
    printf("vetor1 = %p, &vetor1 = %p, *vetor1 = %d\n", vetor1, &vetor1, *vetor1);
    printf("vetor2 = %p, &vetor2 = %p, *vetor2 = %d\n", vetor2, &vetor2, *vetor2);
    printf("ponteiro = %p, &ponteiro = %p, *ponteiro = %d\n", ponteiro, &ponteiro, *ponteiro);
    printf("i = %d, &i = %p\n\n", i, &i);

    ponteiro = vetor1;
    printf("ponteiro = %p, &ponteiro = %p, *ponteiro = %d\n", ponteiro, &ponteiro, *ponteiro);
    
    ponteiro[3] = ponteiro[4] = 10;
    printf("ponteiro = %p, &ponteiro = %p, *ponteiro = %d\n\n", ponteiro, &ponteiro, *ponteiro);
    
    vetor2 = (int*) malloc(5 * sizeof(int));
    printf("vetor2 = %p, &vetor2 = %p, *vetor2 = %d\n\n", vetor2, &vetor2, *vetor2);
    

    for(i = 0; i < 5; i++){
        vetor2[i] = vetor1[i];
    printf("vetor2[%d] = %d, &vetor2[%d] = %p\n", i, vetor2[i], i, &vetor2[i]);
    printf("vetor1[%d] = %d, &vetor1[%d] = %p\n", i, vetor1[i], i, &vetor1[i]);
    printf("ponteiro[%d] = %d, &ponteiro[%d] = %p\n", i, ponteiro[i], i, &ponteiro[i]);    
    }

    free(vetor2);
    vetor2 = NULL;
    printf("vetor2 = %p, &vetor2 = %p\n\n", vetor2, &vetor2);

    return 0;
}

// Curiosidade aleatória: Uma variável 'char' é um vetor de caracteres. Cada caractere usa 1b (Um byte), e a variável em si contém o endereço da primeiro caractere, exatamente como um vetor. Printar a variável 'char' é basicamente exibir todos os blocos do 'char'. 