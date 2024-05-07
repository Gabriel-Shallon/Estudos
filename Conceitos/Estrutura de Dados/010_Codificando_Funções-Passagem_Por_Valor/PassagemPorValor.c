#include <stdio.h>

int soma(int x, int y){
   int z = x + y; 

    puts("=== DENTRO DA FUNCAO ===");
    printf("&x = %p, x = %d\n", &x, x);
    printf("&y = %p, y = %d\n", &y, y);
    printf("&z = %p, z = %d\n", &z, z);
        //Os endereços de memória das variáveis dentro da função não vão estar em sequência com o das outras variáveis no código, já que os mesmos são armazenados em outra região da memória

    return z;
}

int main(){

    int a = 10;
    int b = 20;
    int c;

    puts("### ANTES DE CHAMAR A FUNCAO ###"); ///O puts apenas exibe uma string, sem variáveis
    printf("&a = %p, a = %d\n", &a, a);
    printf("&b = %p, b = %d\n", &b, b);
    printf("&c = %p, c = %d\n", &c, c);

    c = soma(a, b);

    puts("### DEPOIS DE CHAMAR A FUNCAO ###");
    printf("&a = %p, a = %d\n", &a, a);
    printf("&b = %p, b = %d\n", &b, b);
    printf("&c = %p, c = %d\n", &c, c);

    return 0;
}