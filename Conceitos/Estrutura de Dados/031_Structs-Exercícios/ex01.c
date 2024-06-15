#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _livro{
    char titulo[100];
    float preco;
    int qtdePaginas;
} Livro;


Livro* criaLivro(char titulo[], float preco, int qtdePaginas){
    
    Livro *livro = (Livro*) calloc(1, sizeof(Livro));

    strcpy(livro->titulo, titulo);
    livro->preco = preco;
    livro->qtdePaginas = qtdePaginas;

    return livro;
}

int main(){

Livro livro1;
Livro* livro2 = (Livro*) calloc(1, sizeof(Livro));

printf("Tamanho livro1: %ld bytes\n", sizeof(livro1));
printf("Tamanho do ponteiro para o livro2: %ld bytes\n", sizeof(livro2));
printf("Tamanho livro2: %ld bytes\n", sizeof(*livro2));

    return 0;
}