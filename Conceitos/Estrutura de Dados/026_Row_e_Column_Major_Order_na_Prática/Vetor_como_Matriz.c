[[[[[[[[[[[[[[[[[[[[[
  Vetor-Como-Matriz
]]]]]]]]]]]]]]]]]]]]]

Operações 'matrixiais' são operações que envolvem mais de uma matriz.
Exemplo:

matrix1 * matrix2;

Elas são muito eficientes pois não precisam acessar cada valor individualmente dentro da 'matriz', já que calculam as matrizes como objetos inteiros.

Esse tipo de operação não funcionária com a nossa forma de declarar 'matrizes' dinâmicas, pois cada vetor da 'matriz' é criado separadamente na memória, não estando armazenados de forma sequencial em um único bloco.
Ou seja, o sistema não identifica a 'matriz' e seus valores como um obejeto só, pois a 'matriz' é basicamente um ponteiro que aponta para a direção de um 'vetor' cheio de ponteiros que apontam para vetores com valores do tipo em específico.
Os vetores finais, que armazenam valores (que não sejam endereços), ficam separados na memória, e são tratados individualmente.

Um vetor em si, é considerado pelo sistema um só objeto, mas uma matriz é basicamente uma ligação através de endereços entre uma hierarquia de vetores.
Por isso uma operações 'matrixial' não funciona com a nossa forma convencional de declaração de matrizes dinâmicas.


Para operações 'matrixiais' funcionarem, precisamos declarar uma 'matriz' como um 'vetor':

int* matriz = (int*) calloc(rows*cols, sizeof(int));

- Dessa forma, garantimos que a 'matriz' dinâmica tenha seus elementos armazenados de forma contígua na memória 'RAM', não deixando espaços entre os vetores na memória, tratando um 'vetor' como 'matriz'.
- Uma das desvantagens é: Não podemos mais acessar os elementos da 'matriz' pelos indices de linhas e colunas :(
- Então, como acessar os elementos dessa 'matriz'?

Supondo que temos >2 linhas< e >3 colunas<, temos um total de >>6 elementos<<, que vão ser guardados de como um vetor na memória, um bloco só de 6 elementos :)
(img 'vetorComoMatrizNaMemória.png') (tem 7 elementos (oque não faz muito sentidokkk), mas nosso exemplo tem dó 6 mesmo)

EXEMPLO:

Temos a matriz m[2][3] -------> 0___1___3 (Colunas)
                           1->| 0 | 1 | 2 |
                           2->| 3 | 4 | 5 |
                        (Linhas)

Queremos transforma ela em um vetor, que será v[6] ------------>  0___1___2___3___4___5  -----> 6 elementos
                                      (m.linhas * m.colunas)    | 0 | 1 | 2 | 3 | 4 | 5 |


Basicamente, temos que traduzir m[i][j] ---> v[i]                                 
A equação pra isso é a seguinte:

m[i][j] -> v[ (i * m.cols) + j ]

O i, j e cols na equação são referentes a matriz m

EXEMPLO:

m[2][3];

m[1][1] = v[ (1 * 3) + 1 ];

m[1][1] = v[4];

Com esse calculo, descobrimos que a posição m[1][1] na matriz seria equivalente a posição v[4] do vetor.
Olhando lá em cima, na mini planilha que eu fiz pra mostrar visualmente, podemos ver que os valores batem perfeitamente, e a equação pode ser usada para qualquer uma das posições de m :)