#include <stdio.h>
#include <stdlib.h>

// É possível enviar valores pro código na hora de executar o programa no terminal, separando os argumentos com espaço, da seguinte forma:
int main(int argc, char* argv[]){
// O 'argv' irá armezanar os argumentos passados
// O 'argc' irá armazenar quantos argumentos foram passados pra main 
// ./ex 10 5
// No exemplo acima, argc seria igual a 3, pois são passados 3 argumentos (ex, 10, 5).

    printf("argc = %d\n\n", argc);
    for(int i = 0; i < argc; i++){
        printf("argv[%d] = %s\n", i, argv[i]);
    }

// Usar:
// ./notasInteressantes [argumentos diversos]

    return 0;
}

// Outros usos disso no 'ex02.c'