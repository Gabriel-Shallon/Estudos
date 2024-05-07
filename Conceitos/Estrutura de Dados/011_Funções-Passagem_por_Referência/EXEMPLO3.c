#include <stdio.h>

void SomaESubtracao(int x, int y, int *sub, int *som){   
    *som = x + y;
    *sub = x - y;

    puts("=== DENTRO DA FUNCAO ===");
    printf("&x = %p, x = %d\n", &x, x);
    printf("&y = %p, y = %d\n", &y, y);
    printf("&som = %p, som = %d, *som = %p\n", &som, som, *som);    
    printf("&sub = %p, sub = %d, *sub = %p\n\n", &sub, sub, *sub);
}

int main(){

int a = 10;
int b = 20;
int soma;
int subtracao;

    puts("### ANTES DE CHAMAR A FUNCAO ###");
    printf("&a = %p, a = %d\n", &a, a);
    printf("&b = %p, b = %d\n", &b, b);
    printf("&soma = %p, soma = %d\n", &soma, soma);
    printf("&subtracao = %p, subtracao = %d\n\n", &subtracao, subtracao);

SomaESubtracao(a, b, &subtracao, &soma);

    puts("### DEPOIS DE CHAMAR A FUNCAO ###");
    printf("&a = %p, a = %d\n", &a, a);
    printf("&b = %p, b = %d\n", &b, b);
    printf("&soma = %p, soma = %d\n", &soma, soma);
    printf("&subtracao = %p, subtracao = %d\n\n", &subtracao, subtracao);
    
return 0;
}

