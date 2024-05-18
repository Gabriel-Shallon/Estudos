#include <stdio.h>
#include <stdlib.h>

double* ReturnDynamicVector(){

    return (double *) calloc(10, sizeof(double));;
    
}

void ReferenceDynamicVector(double **vetor){
    
    *vetor = (double*) calloc(10, sizeof(double));

}

void CleanVector(double** vetor){

    free(*vetor);
    *vetor = NULL;

}

double* ReturnCopyDynamicVector(double *vetor){

    return vetor;

}

void ReferenceCopyDynamicVector(double *vetor, double **vetorCopy){

    *vetorCopy = vetor;
    
}


void PrintVector(double *vetorPrint){

    printf("\n\nVetor = %p, &Vetor = %p\n\n", vetorPrint, &vetorPrint);
    for(int i = 0; i < 10; i++){
    printf("Vetor[%d] = %f, &Vetor[%d] = %p\n", i, vetorPrint[i], i, &vetorPrint[i]);
    }

}


int main(){

    double* vetor;
    double* vetorCopy;

    vetor = ReturnDynamicVector(vetor);
    PrintVector(vetor);

    CleanVector(&vetor);

    ReferenceDynamicVector(&vetor);
    PrintVector(vetor);

    vetorCopy = ReturnCopyDynamicVector(vetor);
    PrintVector(vetorCopy);

    CleanVector(&vetorCopy);

    ReferenceCopyDynamicVector(vetor, &vetorCopy);
    PrintVector(vetorCopy);

    CleanVector(&vetorCopy);
    CleanVector(&vetor);

    return 0;
}