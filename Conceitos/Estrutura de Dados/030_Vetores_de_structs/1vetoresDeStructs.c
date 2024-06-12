[[[[[[[[[[[[[[[[[[[[[[[[[
    Vetores-de-structs
]]]]]]]]]]]]]]]]]]]]]]]]]

--- ESTATICAMENTE ---

Existe apenas uma forma de fazer um vetor de struct(s) estático, e é bem simples:

//////////////////////////
Aluno vetor[10]; // :D
//////////////////////////

Estariamos criando 10 structs do tipo aluno na memória 'stack'.
Para acessar os elementos do vetor (as struct(s)) fazemos:

//////////////////////////
vetor[3].nome;
vetor[8].idade;
[...]
//////////////////////////



--- DINAMICAMENTE ---

Para um vetor de struct(s) dinâmico temos duas formas diferentes.


== 1° forma ==
A primeira forma é praticamente igual ao instânciamento de uma só struct dinâmica, mudando apenas a quantidade de elementos alocados na memória 'Heap' quando usamos o 'calloc':

////////////////////////////////////////////////////////
Aluno *vetor = (Aluno*) calloc(10, sizeof(Aluno));
////////////////////////////////////////////////////////

Como comparação, ao instanciar uma só struct de forma dinâmica alteramos apenas a quantidade no 'calloc' de 10 para 1, e colocamos um nome próprio para a variável aluno sendo alocada:

////////////////////////////////////////////////////////
Aluno *ted = (Aluno*) calloc(1, sizeof(Aluno));
////////////////////////////////////////////////////////

A variável 'vetor' basicamente aponta para um bloco de memória na memória 'heap' com o tamanho de 10 struct(s) do tipo aluno.
Podemos facilmente desalocar esse bloco com apenas um free() para apagar o bloco de memória, e colocar o vetor para não apontar para lugar nenhum usando o NULL:

//////////////////////
free(vetor);
vetor = NULL;
//////////////////////

O único problema com esse metodo é que se formos lidar com um vetor de um só elemento não faz sentido considera-lo um vetor, pois considerar algo assim pode deixar o código meio confuso.
Por isso quando alocamos uma só struct damos um nome próprio a ela. Também poderia causar alguma confusão se alocassemos mais de um elemento para uma struct de nome próprio.
Seria estranho uma struct 'ted' conter as informações do ted e do juan.


== 2° forma ==
Na segunda forma, mantemos a alocação de um elemento para cada ponteiro, e criamos um vetor de ponteiros na memória 'stack', com cada ponteiro apontando para um bloco de memória para a struct:

////////////////////////////////////////////////////
Aluno **vetor = (Aluno **) calloc(3, sizeof(Aluno *));
////////////////////////////////////////////////////

Podemos adicionar valores aos 3 elementos do 'vetor' da seguinte forma:
/////////////////////////////////////////////////
vetor[0] = createAluno("Ted", 12, harryPotter);
vetor[0] = createAluno("Juan", 11, minecraftManuscript);
vetor[0] = createAluno("Ted", 13, littlePrince);
/////////////////////////////////////////////////

(Levando em consideração que temos a classe que atribui os valores aos elementos de Aluno):
/////////////////////////////////////////////////////////////////////////////////////////////////////
Aluno *createAluno(const char *nome, int idade, Livro *livroFav){

    Aluno *aluno = calloc(1, sizeof(Aluno));
    
    strcpy(aluno->nome, nome);
    aluno->idade = idade;
    aluno->livroFavorito = copyLivro(livroFav);
 
    return aluno;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////

Para desalocarmos:
/////////////////////////////////////////////////////////
void deleteAluno(Aluno **alunoReference){
    Aluno *aluno = *alunoReference;

    deleteLivro(&aluno->livroFavorito);

    free(aluno);
    *alunoReference = NULL;
}

for (int i = 0; int i < 3; i++){
    deleteAluno(vetor[i]); 
}
/////////////////////////////////////////////////////////

O problema dessa forma é que os elementos não estarão alocados de forma contígua na memória, ou seja, cada bloco do tipo Aluno criado na memória 'Heap' será separado de forma não linear um do outro.