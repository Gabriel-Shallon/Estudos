#include <stdio.h>

void troca(int *x, int *y){
    
    int auxiliar = *x;
    *x = *y;
    *y = auxiliar;

    puts("### DENTRO DA FUNCAO ###");
    printf("\n*x = %d, &x = %p\n", *x, &x);
    printf("*y = %d, &y = %p\n", *y, &y);
    printf("auxiliar = %d, &auxiliar = %p\n\n", auxiliar, &auxiliar);
}


int main(){

    int a = 10;
    int b = 20;

    puts("### ANTES DA FUNCAO ###");
    printf("\na = %d, &a = %p\n", a, &a);
    printf("b = %d, &b = %p\n\n", b, &b);

    troca(&a, &b);

    puts("### DEPOIS DA FUNÇÃO ###");
    printf("\na = %d, &a = %p\n", a, &a);
    printf("b = %d, &b = %p\n\n", b, &b);
    

    return 0;
}