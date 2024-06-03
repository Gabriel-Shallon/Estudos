[[[[[[[[[[[[[[[[[[[[[[[
    struct-estática
]]]]]]]]]]]]]]]]]]]]]]]

A forma estática de uma struct é a mesma que usamos na introdução desse tópico.

EX:
//////////////////////////////////////////
typedef struct _aluno{
    char nome[100];
    int idade;
} Aluno;

int main(){
    Aluno ted;

    strcpy(ted.nome, "Ted");
//ou
    ted.nome = "Ted";
//só funciona para string (fica na biblioteca <string.h>)

    ted.idade = 10;

    printf("sizeof(Aluno) = %lu bytes", sizeof(Aluno));

return 0;
}
//////////////////////////////////////////

Alocando a struct dessa forma, para variável do tipo dessa struct teremos um bloco de memória que, nos primeiros 100 bytes teremos um espaço para o nome (cada caractere usa 1 byte (char nome[100] = 100 bytes)), e logo após o último byte para o nome, haverá um elemento do tipo int (4 bytes).
Todos os elementos de uma struct estática são alocados sequenciamente na memória.
Nesse exemplo, a nossa struct teria 104 bytes na memória :D (o print mostra isso).

Quando instanciamos 'ted', não haverá nenhum valor atribuido aos seus elementos, ou seja, haverá lixo de memória nos elementos, até atribuirmos valores para os elementos.

A variável 'ted' do tipo aluno, representa o endereço do primeiro elemento do bloco de memória alocado pela struct.

'ted' == '&ted' == '&(ted.nome)'

Podemos atribuir valores aos elementos de uma variável struct na mesma linha da sua declaração, da seguinte forma:

////////////////////////////////////////////////////////////////
Aluno ted = {.nome = "Ted", .idade = 10};
////////////////////////////////////////////////////////////////