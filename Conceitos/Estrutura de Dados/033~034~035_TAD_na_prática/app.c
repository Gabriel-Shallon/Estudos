#include "floatVector.h"

int main(){

    floatVector *vector = create(10);
    destroy(&vector);

    return 0;
}

// Para compilar usamos: 
// gcc app.c floatVector.o -o app