#include <stdio.h>
#include <stdlib.h>

////////////////////// PARTE IMPORTANTE DO EXEMPLO ////////////////////// 


void DesalocaVetorErrado(int *vetor /* Ou 'int vetor[]' */){

    free(vetor);
    vetor = NULL;

}
// Nesse formato >NÃO FUNCIONA<, pois setamos o 'vetor' igual a NULL, apenas para o parametro 'vetor', e não para o 'vetorDinamico' real, que está fora da função. O 'vetorDinamico' continua com o endereço base do vetor (blocos int na memória 'heap'). Por outro lado, a função 'free' funciona, já que ela apenas limpa os blocos onde o ponteiro vetor está apontando, que nesse caso, é o mesmo que o do 'vetorDinamico', já que o 'vetor' é uma cópia do mesmo.


// A forma correta é a seguinte:
void DesalocaVetorCorreto(int **enderecoVetor /* Ou 'int vetor[]' */){

    free(*enderecoVetor);
    *enderecoVetor = NULL;

}
// Assim, usando um ponteiro de ponteiros (ponteiros int's nesse caso), podemos alterar o conteúdo real do 'vetorDinamico'. 


////////////////////// PARTE IMPORTANTE DO EXEMPLO ////////////////////// 





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

///////////////////////////////////////////////////////////////////////////////////////


    // Desalocando o vetor dinâmico usando as funções do começo do código
    puts("===> ANTES DA FUNCAO ERRADA DE DESALOCAR O VETOR DINAMICO <===");
    printf("&vetorDinamico = %p, vetorDinamico = %p\n", &vetorDinamico, vetorDinamico);
    PrintVetor(vetorDinamico, 5);
   
    DesalocaVetorErrado(vetorDinamico);
   
    puts("===> DEPOIS DA FUNCAO ERRADA DE DESALOCAR O VETOR DINAMICO <===");
    printf("&vetorDinamico = %p, vetorDinamico = %p\n", &vetorDinamico, vetorDinamico);
    PrintVetor(vetorDinamico, 5);



    puts("===> ANTES DA FUNCAO CORRETA DE DESALOCAR O VETOR DINAMICO <===");
    printf("&vetorDinamico = %p, vetorDinamico = %p\n", &vetorDinamico, vetorDinamico);
    PrintVetor(vetorDinamico, 5);

    DesalocaVetorCorreto(&vetorDinamico);
    // Passamos o endereço do 'vetorDinamico', para podermos alterar seu conteúdo, e não a copia do seu conteúdo recebida pelo parametro na função.

    puts("===> DEPOIS DA FUNCAO CORRETA DE DESALOCAR O VETOR DINAMICO <===");
    printf("&vetorDinamico = %p, vetorDinamico = %p\n", &vetorDinamico, vetorDinamico);
    PrintVetor(vetorDinamico, 5);

///////////////////////////////////////////////////////////////////////////////////////

    return 0;
}


// Detalhe importante sobre os parametros das funções: int vetor[] === int *vetor;