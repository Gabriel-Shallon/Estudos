#include <stdio.h>
#include <stdlib.h>

void SomaVetorComEscalar(int vetor[], int n, int escalar){
    for(int i = 0; i < n; i++){
        vetor[i]+=escalar;
    }
}

void PrintVetor(const int *vetor, int n){
    for(int i = 0; i < n; i++){
       printf("&vetor[%d] = %p, vetor[%d] = %d\n", i, &vetor[i], i, vetor[i]);    
    }
    puts("");
}


int main(){
    
    printf("----VETOR ESTATICO----\n\n");
    int vetorEstatico[5] = {0, 10, 20, 30, 40};  

    puts("### ANTES DE ADICIONAR 9 ###");
    PrintVetor(vetorEstatico, 5);

    SomaVetorComEscalar(vetorEstatico, 5, 9);
    
    puts("### DEPOIS DE ADICIONAR 9 ###");
    PrintVetor(vetorEstatico, 5);

/////////////////////////////////////////////////////////////////////

    printf("----VETOR DINAMICO----\n\n");
    int *vetorDinamico = (int*) calloc(5, sizeof(int));

    for(int i =0; i < 5; i++){
        vetorDinamico[i] = i * 100;
    }

    puts("### ANTES DE ADICIONAR 9 ###");
    PrintVetor(vetorDinamico, 5);

    SomaVetorComEscalar(vetorDinamico, 5, -50);
    
    puts("### DEPOIS DE ADICIONAR 9 ###");
    PrintVetor(vetorDinamico, 5);

    // Desalocando o vetor dinâmico
    free(vetorDinamico);
    vetorDinamico = NULL;

    return 0;
}


// Detalhe importante sobre os parametros das funções: int vetor[ ] === int *vetor;