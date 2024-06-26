//Todas as implementações das especificações ficam aqui

#include "floatVector.h"
//O include acima é importante :)

#include <stdlib.h>
#include <stdio.h>


typedef struct _floatVector{

    int capacity;
    //Número máximo de elementos
    int size;
    //Número atual de elementos
    float* data;
    //Elementos do vetor

} floatVector;



/**
 * @brief Cria(aloca) um vetor de floats com uma certa capacidade.
 * 
 * @param capacity Capacidade do vetor.
 * @return floatVector* Um vetor de floats alocado/criado.
 */
//(padrão de documentação do vscode)
floatVector *create(int capacity){

    floatVector *vector = (floatVector*) calloc(1, sizeof(floatVector));
    vector->size = 0;
    vector->capacity = capacity;
    vector->data = (float*) calloc(capacity, sizeof(float));

    return vector;
}
//Curiosidade: O nome dos parametros na implementação podem ser diferente que os na implementação, contanto que os tipos sejam os mesmos. É possível nem colocar um nome para os parametros nas especificações, mas pode deixar meio confuso então é melhor colocar :]





/**
 * @brief Destroi(desaloca) um vetor de floats usando um ponteiro para apontar para região original onde o vetor se encontra na memória.
 * 
 * @param vectorReference ponteiro que referencia o vetor que será desalocado.
 * @return void
 */
void destroy(floatVector **vectorReference){
    
    free((*vectorReference)->data);
    free(*vectorReference);
    free(vectorReference);
    *vectorReference = NULL;
    vectorReference = NULL;

}




//Já deu pra entender como se usa a documentação default do vscode, como não é nenhum projeto compartilhado não é tão importante assim documentar cada função.
void append(floatVector *vector, float val){
    
    if(vector->size >= vector->capacity){
        printf ("ERROR in function 'append'\n");
        printf ("ERROR: vector is full\n");
        exit(EXIT_FAILURE);
    }

    vector->data[vector->size] = val;
    vector->size++;

    //vector->data[vector->size++] = val;
    //Esse exemplo acima tabém funcionaria, já que o '++' usa o valor atual e só depois addiciona +1.
}





void print(const floatVector *vector){
    puts("-------------------");
    printf("Size: %d\n", vector->size);
    printf("Capacity: %d\n", vector->capacity);
    puts("----");

    for(int i = 0; i < vector->capacity; i++){
        printf("[%d] = %f\n",i, vector->data[i]);
    }
    puts("-------------------");
}




int capacity(const floatVector *vector){
    return vector->capacity;
}




int size(const floatVector *vector){
    return vector->size;
}


// Para compilar os dados abstratos, colocamos "gcc -c floatVector.c" no terminal. Podemos nomear o arquivo de saida com -o normalmente, mas por default o gcc vai entregar um arquivo como msm nome do que entrou mas com .o invés de .c
// Detalhe que eu sei de cabeça mas é bom anotar tbm, é que os dois arquivos devem ser guardados na msm pasta para o include do floatVector.h funcione.