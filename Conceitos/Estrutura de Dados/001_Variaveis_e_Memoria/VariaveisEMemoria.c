#include <stdio.h>
 
int main(){

    int a = 10;
    // >> Nome: a; Tipo: Inteiro; Valor: 10; <<
    // Int = 4 bytes;
    // Endereço: x + 3 (como tem 4 bytes)
    // (Endereço em bytes)

    int b, c;
    // >> Nome: b, c; Tipo: Inteiro; Valor: (?); <<
    // Mesmo quando o valor não é definido, as variáveis já terão um endereço na memória, e seu valor em seus respectivos bytes será uma sequência aleatória de bits. (lixo de memória)


    printf("&a = %p, a = %d\n", &a, a);
    printf("&b = %p, b = %d\n", &b, b);
    printf("&c = %p, c = %d\n\n", &c, c);

    b = 20;
    c = a + b;

    printf("&a = %p, a = %d\n", &a, a);
    printf("&b = %p, b = %d\n", &b, b);
    printf("&c = %p, c = %d\n\n", &c, c);

    return 0;
}

// Usar "gcc -o VariaveisEMemoria VariaveisEMemoria.c" e depois ".\VariaveisEMemoria" no terminal para rodar
//Vai sair em hexadecimal, mas se traduzido para decimal, cada variável vai estar a 4 bytes uma da outra 