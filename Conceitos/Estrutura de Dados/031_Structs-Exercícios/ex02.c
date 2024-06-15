#include <stdio.h>
#include <stdlib.h>

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

Livro livro1 = {.titulo = "Harry Potter 1", 30.0, 250};
Livro* livro2 = criaLivro("O Segredis de Cacilds", 10.0, 100);

printf("Titulo1 = %s\n", livro1.titulo); //funciona
printf("Titulo1 = %s\n", livro1->titulo); //não funciona
printf("Titulo1 = %s\n", &livro1->titulo); //não funciona
printf("Titulo1 = %s\n\n", (&livro1)->titulo); //funciona

printf("Titulo2 = %s\n", livro2.titulo); //não funciona
printf("Titulo2 = %s\n", livro2->titulo); //funciona
printf("Titulo2 = %s\n", *livro2.titulo); //não funciona
printf("Titulo2 = %s\n", (*livro2).titulo); //funciona
printf("Titulo2 = %s\n", livro2[0].titulo); //funciona kkkkkkk 0-0

    return 0;
}
// N dá pra compilar pq o gcc n deixa a gente fazer esses prints q não funcionamkkkkkkk