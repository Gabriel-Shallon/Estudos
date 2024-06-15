//Todas as implementações das especificações ficam

#include "floatVector.h"
//Esse include é mportante :)

#include <stlib.h>

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

    floatVector *vector = (floatVector*) calloc(1, (floatVector));
    vector->size = 0;
    vector->capacity = capacity;
    vector->data = (float*) calloc(capacity, sizeof(float));

}
//Curiosidade: O nome dos parametros na implementação podem ser diferente que os na implementação, contanto que os tipos sejam os mesmos. É possível nem colocar um nome para os parametros nas especificações, mas pode deixar meio confuso então é melhor colocar :]


void destroy(floatVector **vectorReference){
    
    free((*vectorReference)->data);
    free(*vectorReference);
    free(vectorReference);
    *vectorReference = NULL;
    vectorReference = NULL;

}