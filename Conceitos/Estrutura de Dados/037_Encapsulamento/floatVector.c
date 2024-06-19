#include "floatVector.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


/************************************ IMPLEMENTAÇÃO DA INTERFACE PÚBLICA *************************************/
//(base para a implementação, mas não é acessível ao usuário ou outros arquivos, pois não foi definida no arquivo header (.h))

typedef struct _floatVector{

    int capacity;
    int size;
    float* data;

} floatVector;


bool isFull(const floatVector *vector){
    return vector->size == vector->capacity;
}
// Um função para checar se o vetor está cheio seria útil para outros arquivos, e seria de melhor uso deixa-lá pública, adicionando suas especificações no .h, mas por questões didáticas ela será privada, para usarmos de exemplo.

/************************************ IMPLEMENTAÇÃO DA INTERFACE PÚBLICA *************************************/
//(baseada nas especificações (públicas, .h))

floatVector *create(int capacity){

    floatVector *vector = (floatVector*) calloc(1, sizeof(floatVector));
    vector->size = 0;
    vector->capacity = capacity;
    vector->data = (float*) calloc(capacity, sizeof(float));

    return vector;
}



void destroy(floatVector **vectorReference){
    
    free((*vectorReference)->data);
    free(*vectorReference);
    free(vectorReference);
    *vectorReference = NULL;
    vectorReference = NULL;

}




void append(floatVector *vector, float val){
    
    if(isFull(vector)){
        printf ("ERROR in function 'append'\n");
        printf ("ERROR: vector is full\n");
        exit(EXIT_FAILURE);
    }

    vector->data[vector->size] = val;
    vector->size++;

}





void print(const floatVector *vector){
    puts("-------------------");
    printf("Size: %d\n", vector->size);
    printf("Capacity: %d\n", vector->capacity);
    puts("----");

    for(int i = 0; i < vector->size; i++){
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



float at(const floatVector *vector, int index){
    if (index >= vector->size || index < 0){
        printf ("ERROR in function 'at'\n");
        printf ("ERROR: invalid index\n");
        exit(EXIT_FAILURE);
    }
    
    return vector->data[index];
}

// A única diferença entre o 'get' (abaixo) e o 'at' (acima) é que o 'at' checa se o indice é valido antes de retornar o valor do vetor nesse indice.
// Não usamos apenas o 'at' pois o 'get', por não ter nenhuma checagem, é mais rápido e a melhor opção em caso do processamento de grandes quantidades de dados.
// Basicamente, é para mais perfomance acabamos com menos segurança, e vice-versa.

float get(const floatVector *vector, int index){
    return vector->data[index];
}



void set(floatVector *vector, int index, float val){
    if (index >= vector->size || index < 0){
        printf ("ERROR in function 'set'\n");
        printf ("ERROR: invalid index\n");
        exit(EXIT_FAILURE);
    }
    
    vector->data[index] = val;
}


void fullFill(floatVector *vector){
    for(int i = 0; i < vector->capacity; i++){
        append(vector, vector->size);
    }
}


// Para compilar os dados abstratos, colocamos "gcc -c floatVector.c" no terminal. Podemos nomear o arquivo de saida com -o normalmente, mas por default o gcc vai entregar um arquivo como msm nome do que entrou mas com .o invés de .c
// Detalhe que eu sei de cabeça mas é bom anotar tbm, é que os dois arquivos devem ser guardados na msm pasta para o include do floatVector.h funcione.