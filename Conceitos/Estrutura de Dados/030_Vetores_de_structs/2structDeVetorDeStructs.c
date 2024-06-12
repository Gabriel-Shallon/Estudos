[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[
     structDeVetorDeStructs
]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]

Para adicionarmos mais informações para um vetor de struct(s), podemos criar uma struct que contêm o vetor de struct(s) e mais informações como o tamanho do vetor e etc.

///////////////////////////////////////////////
typedef struct _vetorAluno{
    Aluno **vetor;
    int size; // número de elementos
} vetorAluno;
///////////////////////////////////////////////

(Eu pessoalmente prefiro usar um DEFINE para esses exemplos, pq de qualquer forma em um uso real informações como tamanho irão chegar de forma externa, por um usuário ou dados do próprio sistema)