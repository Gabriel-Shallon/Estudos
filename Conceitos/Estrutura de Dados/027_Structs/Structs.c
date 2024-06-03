[[[[[[[[[[[[[[[[[[[
      STRUCTS
]]]]]]]]]]]]]]]]]]]

- Uma struct (ou registro/record) é um "pacote" de variáveis, que podem ser de tipos diferentes.
- Visa representar grupos de dados que resultem em algo mais "concreto".
        EX.: registro de alunos, automóveis, etc
- Cada variável é um >campo< do registro.
- Em 'C', registro(s) são conhecidos como struct(s) (de structure(s)).
  
>>>> Esqueleto padrão de um struct:

//////////////////////////////////////////
struct[nome do registro]{
    tipo campo1;
    tipo campo2;
    [...]
    tipo campoN;
}[uma ou mais variáveis];
//////////////////////////////////////////

- [nome do registro] e [uma ou mais variáveis] são opcionais.
- [nome do registro] é o nome (não o tipo) da classe de registos do mesmo tipo.
- Você já pode >declarar variáveis<, referentes a esta struct, colocando-as no lugar de [uma ou mais variáveis].

>>> 1° Exemplo de uma struct para armazenar as informações de alunos:

//////////////////////////////////////////
struct Aluno {
    char nome[100];
    int idade;
};

//declaração de uma variável
struct Aluno barney;
//////////////////////////////////////////

- 'struct Aluno' é o nome do novo tipo de dados. Por esse motivo para declararmos uma variável Aluno, usamos 'struct Aluno'

>>> 2° Exemplo de uma struct para armazenar as informações de alunos:

//////////////////////////////////////////
struct Aluno {
    char nome[100];
    int idade;
} barney, ted;
//////////////////////////////////////////

- Nesse caso, junto a definição da estrutura, declaramos as variáveis do novo tipo.

>>> 3° Exemplo de uma struct para armazenar as informações de alunos:

//////////////////////////////////////////
struct {
    char nome[100];
    int idade;
} barney, ted;
//////////////////////////////////////////

- A diferença do exemplo anterior é que a struct não tem um nome declarado.
- Como a struct não tem nome, após a definição da mesma, não será mais possível criar mais variáveis desse tipo além das que foram declaradas junto a definição da struct.

>>>> ACESSANDO os campos de uma struct:

//////////////////////////////////////////
struct Aluno{
    char nome[100];
    int idade;
};

int main(){
    //declaração da variável barney
    struct Aluno barney;

    //adicionando valores para o barney :)
    barney.nome = "Barney";
    barney.idade = 10;

    return 0;
}
///////////////////////////////////////////

>>>>> Uma forma mais elegante de declarar uma struct:

///////////////////////////////////////////
typedef struct Aluno{
    char nome[100];
    int idade;
} TipoAluno;

struct Aluno barney;
TipoAluno ted;
///////////////////////////////////////////

- Nessa forma damos um "apelido" para a struct, nesse caso, 'TipoAluno' é o apelido.
- Podemos declarar variáveis do novo tipo tanto da forma convencional como usando o nosso novo apelido.
- 'Aluno' é opcional.
- Poderíamos omiti-lo, deixando apenas o 'TipoAluno' para representar o tipo da struct.

>>>> O padrão que iremos usar é o seguinte:

//////////////////////////////
typedef struct _aluno {
    char nome[100];
    int idade;
} Aluno;

// Iremos utilizar apenas o apelido definido
Aluno ted;
///////////////////////////////