#include "floatVector.h"

int main(){

    floatVector *vector = create(10);
    print(vector);

    for(int i = 0; i < capacity(vector); i++){
        append(vector, size(vector));
        print("%d", size(vector));
    };

    print(vector);
    
    destroy(&vector);

    return 0;
}

// Para compilar usamos: 
// gcc app.c floatVector.o -o app