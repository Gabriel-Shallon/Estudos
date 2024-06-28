#include "floatVector.h"

int main(){

    floatVector *vector = create(10);
    print(vector);

    fullFill(vector);
    print(vector);

    destroy(&vector);

    return 0;
}