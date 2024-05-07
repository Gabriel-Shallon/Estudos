#include <stdio.h>

void soma(int x, int y, int *z){
    *z = x + y;

    puts("=== DENTRO DA FUNCAO ===");
    printf("&x = %p, x = %d\n", &x, x);
    printf("&y = %p, y = %d\n", &y, y);
    printf("&z = %p, z = %d, *z = %p\n\n", &z, z, *z);
}

int main(){

int a = 10;
int b = 20;
int c;

    puts("### ANTES DE CHAMAR A FUNCAO ###"); ///O puts apenas exibe uma string, sem variáveis
    printf("&a = %p, a = %d\n", &a, a);
    printf("&b = %p, b = %d\n", &b, b);
    printf("&c = %p, c = %d\n\n", &c, c);

soma(a, b, &c);

    puts("### DEPOIS DE CHAMAR A FUNCAO ###");
    printf("&a = %p, a = %d\n", &a, a);
    printf("&b = %p, b = %d\n", &b, b);
    printf("&c = %p, c = %d\n\n", &c, c);

return 0;
}