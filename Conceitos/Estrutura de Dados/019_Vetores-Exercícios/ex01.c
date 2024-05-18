#include <stdio.h>
#include <stdlib.h>


void desalocar(int ** vetor){
    free(*vetor);
    *vetor = NULL;
}


int main(){

    int i, n = 5;
    int* v;
    printf("i = %d, &i = %p\n", i, &i);
    printf("n = %d, &n = %p\n", n, &n);
    printf("v = %p, &v = %p\n\n", v, &v);
    
    v = (int*) malloc(n * sizeof(int));
    printf("v = %p, &v = %p, *v = %d\n\n", v, &v, *v);
    

    for (i = 0; i < 5; i++){
        v[i] = i;
        printf("v[%d] = %d, &v[%d] = %p\n", i, v[i], i, &v[i]);
    }

    desalocar(&v);

    return 0;
}