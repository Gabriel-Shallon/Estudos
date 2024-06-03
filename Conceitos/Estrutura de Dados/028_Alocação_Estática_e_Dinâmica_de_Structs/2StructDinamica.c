[[[[[[[[[[[[[[[[[[[[[[[
    struct-dinâmica
]]]]]]]]]]]]]]]]]]]]]]]

A diferença entre uma struct estática e uma dinâmica está na declaração da variável do tipo dessa struct.
Quando chamamos o novo tipo que criamos na struct, declaramos a variável desse tipo de forma dinâmica, na memória 'Heap'.

EX:
///////////////////////////////////////////////////////////////
typedef _aluno{
    char nome[100];
    int idade;    
} Aluno;

int main(){

    Aluno *ted = (Aluno*) calloc(1, sizeof(Aluno));

    return 0;
}
///////////////////////////////////////////////////////////////

Usando o calloc (ou o malloc), nós abrimos um bloco na memória do tamanho de uma variável do tipo Aluno (104 bytes).
A variável do tipo aluno será armazenada da mesma forma que numa declaração estática, mas o bloco de elementos será armazenado na memória 'Heap', e não na 'Stack'.
Também, dinâmicamente o endereço de 'ted' (&ted) não será igual ao valor de 'ted', já que 'ted' será um ponteiro na memória 'Heap', que tem como valor o endereço de um bloco de memória do tipo Aluno.
O valor de 'ted' será igual ao endereço de 'ted.nome' (&(ted.nome)), pois esse é o primeiro elemento do bloco de memória. 

&ted != ted == &(ted.nome)

Para acessar os campos de uma struct dinâmica (partindo de um ponteiro), usamos '->' no lugar do '.'.

EX:
/////////////////////////////////////////////////
strcpy(ted->nome, "Ted");
//ou
ted->nome = "Ted";

ted->idade = 10;
/////////////////////////////////////////////////