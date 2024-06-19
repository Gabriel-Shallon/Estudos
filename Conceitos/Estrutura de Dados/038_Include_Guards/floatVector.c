#include "floatVector.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


/************************************ IMPLEMENTAÇÃO DA INTERFACE PÚBLICA *************************************/


typedef struct _floatVector{

    int capacity;
    int size;
    float* data;

} floatVector;


bool isFull(const floatVector *vector){
    return vector->size == vector->capacity;
}

/************************************ IMPLEMENTAÇÃO DA INTERFACE PÚBLICA *************************************/


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
