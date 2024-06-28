#include <stdio.h>

int main(){

    puts("hello");

    return 0;
}

// Uma coisa legal a se fazer é pegar todos os .o (objetos de dados abstratos) e colocar numa só pasta dentro do projeto :D
// Fazer a mesma coisa para os .h's é bom tbm
// Para mandar o .o direto para a pasta desejada informamos ao compilador o caminho para a pasta:
// EX: gcc -c floaVector.c -o obj (.o)/floatVector.o