#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct _livro{
    char titulo[100];
    unsigned int numPaginas;
    float preco;
} Livro;
// Unsigned serve para que as variáveis int não aceitem negativos.


// Construtor (Create):
Livro *createLivro(const char *titulo, unsigned int numPaginas, float preco){

    Livro *livro = (Livro*) calloc(1, sizeof(Livro));

    strcpy(livro->titulo, titulo);
    livro->numPaginas = numPaginas;
    livro->preco = preco;

    return livro;
}


void printLivro(const Livro *livro){

    printf("Titulo: %s\n", livro->titulo);
    printf("Num paginas: %d\n", livro->numPaginas);
    printf("Preco: R$ %.2f\n\n", livro->preco);

}

// Delete:
void deleteLivro(Livro **livroReference){
    free(*livroReference);
    *livroReference = NULL;
}


int main(){

    Livro *harryPotter = createLivro("Harry Potter 1", 200, 25);
    // Usando o método construtor para criar o livro Harry Potter 1 de 200 páginas por 25 reais.

    printLivro(harryPotter);

    harryPotter->preco = 10;
    printLivro(harryPotter);
    // Um desconto!!!! :D :D :D :D
    // Fazer isso aqui também funciona na main.

    deleteLivro(&harryPotter);
    printLivro(harryPotter);
    // Acabou o stock D,: (pra sempre)

    return 0;
}
// Basicamente criamos uma struct livros, criamos um construct para criar instâncias da struct livro, e instânciamos o livro harry potter :D 
// + um print dos valores dos elementos do livro harry potter.