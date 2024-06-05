#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct _livro{
    char titulo[100];
    unsigned int numPaginas;
    float preco;
} Livro;
// Unsigned serve para que as variáveis int não aceitem negativos.


typedef struct _aluno{
    char nome[100];
    int idade;
    Livro *livroFavorito;
    // O livro favorito não estará armazenado aqui, na verdade, o ponteiro do livro favorito vai armazenar o endereço base do bloco de memória que guardo o livro favorito :)
} Aluno;


// Construtor do livro (Create):
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

void printAluno(const Aluno *aluno){

    printf("Nome: %s\n", aluno->nome);
    printf("Idade: %d\n", aluno->idade);
    puts("Livro Favorito");
    puts("--------------");
    printLivro(aluno->livroFavorito);

}

// Delete:
void deleteLivro(Livro **livroReference){
    free(*livroReference);
    *livroReference = NULL;
    free(livroReference);
    livroReference = NULL;
}

void deleteAluno(Aluno **alunoReference){
    Aluno *aluno = *alunoReference;

    deleteLivro(&aluno->livroFavorito);

    free(aluno);
    *alunoReference = NULL;
}

Livro *createLivro2(const char *titulo, unsigned int numPaginas, float preco){

    Livro *livro = (Livro*) calloc(1, sizeof(Livro));

    strcpy(livro->titulo, titulo);
    livro->numPaginas = numPaginas;
    livro->preco = preco;

    return livro;
}


Livro *copyLivro(const Livro *livro){
    return createLivro(livro->titulo, livro->numPaginas, livro->preco);
}


Aluno *createAluno(const char *nome, int idade, Livro *livroFav){

    Aluno *aluno = calloc(1, sizeof(Aluno));
    
    strcpy(aluno->nome, nome);
    aluno->idade = idade;

    // Temos duas formas diferentes para passar o livro para o livro favorito do aluno
    // 1°:
    aluno->livroFavorito = livroFav;
    // Nessa forma, vamos passar o endereço real do livro. É mais simples, mas, pode correro o risco de mexermos com o livro em si sem querer quando alterarmos algo para o livro favorito, já que estão conectados.
    // 2°:
    aluno->livroFavorito = copyLivro(livroFav);
    // Basicamente, criamos uma cópia do livro favorito do aluno, que traz mais segurança em relação a alteração do aluno, de forma que cada aluno tenha usa cópia segura do livro favorito dele.


    return aluno;
}



int main(){

    Livro *harryPotter = createLivro("Harry Potter 1", 200, 25);
    // Usando o método construtor para criar o livro Harry Potter 1 de 200 páginas por 25 reais.
    printLivro(harryPotter);

    harryPotter->preco = 10;
    printLivro(harryPotter);
    // Um desconto!!!! :D :D :D :D
    // Fazer isso aqui também funciona na main.


    Aluno *ted = createAluno("Ted", 20, harryPotter);
    printAluno(ted);



    deleteAluno(&ted);
    printAluno(ted);

    deleteLivro(&harryPotter);
    printLivro(harryPotter);
    // Acabou o stock D,: (pra sempre)

    return 0;
}
// Criamos um ponteiro que aponta para um bloco de memória do tipo livro e preenchemos os valores dos elementos desse bloco.
// O livro favorito do aluno é basicamente uma variável que aponta para o endereço de um bloco de memória do tipo livro. Exemplo visual em 'RelaçãoAluno-Livro.png'.





















































//⭕♿