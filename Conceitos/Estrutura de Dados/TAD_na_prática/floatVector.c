#include "floatVector.h"

typedef struct _floatVector{

    int capacity;
    //Número máximo de elementos
    int size;
    //Número atual de elementos
    float* data;
    //Elementos do vetor

} floatVector;