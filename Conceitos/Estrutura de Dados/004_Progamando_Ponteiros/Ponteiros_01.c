#include <stdio.h>
#include <stdlib.h>

int main(){

    int a = 10;
    int *p1 = NULL;
    int *p2;

    printf("&a = %p, a = %d\n", &a, a);
    printf("&p1 = %p, p1 = %p\n", &p1, p1);
    printf("&p2 = %p, p2 = %p\n", &p2, p2);

    // 'p1' estará 4 bytes acima de 'a', e 'p2' a 8 bytes acima de 'p1'.
    // O valor de 'p1' será vazio, a = 10, e 'p2' conterá lixo de memória.
    // O correto é sempre atribuir um valor as variáveis, mesmo que seja NULL, é melhor doque deixar o valor com um lixo de memória aleatório.

    p1 = &a;
    p2 = p1;
    *p2 = 4;

    printf("&a = %p, a = %d\n", &a, a);
    printf("&p1 = %p, p1 = %p, *p1 = %d\n", &p1, p1, *p1);
    printf("&p2 = %p, p2 = %p, *p2 = %d\n", &p2, p2, *p2);

    // Na segunda parte do código 'a' será igual a 4, pois 'p2' foi igualado a 'p1', e o conteúdo de 'p1' (*p1), é o valor armazenado em 'a'. Já que 'p1' e 'p2' são iguais, o conteúdo de 'p2' = valor de 'a'. Substituir o conteúdo de 'p2' é igual a mudar o valor de 'a' por 4.
    // Da mesma forma, o conteúdo de 'p1' também será 4, pois ele também "aponta" para o 'a' (p2 = p1 <-> *p1 = *p2). 


    return 0;
}


// Adicional não relacionado: p1 = &p2 não funcionaria pois p1 é int, e não int*. Se ele fosse int* ele seria um ponteiro de ponteiros.
// p1 = a também não funcionaria, já que o 'a' sozinho representa o valor de 'a', e o ponteiro guarda apenas endereços. (Teria que ser &a)



//gcc Ponteiros_01.c -o Ponteiros_01
//./Ponteiros_01