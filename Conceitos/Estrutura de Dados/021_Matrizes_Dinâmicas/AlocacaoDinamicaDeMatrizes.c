]]]]]]]]]]]]]]]]]
ALOCAÇÃO DINÂMICA
]]]]]]]]]]]]]]]]]

- Responsável pela alocação de uma 'matriz' na memória 'Heap';
- Queremos um 'Vetor' de 'Vetores' / 'Array' de 'Arrays'


Para declararmos um 'Vetor' dinâmico:

<>
int *vetor = (int*) calloc(100, sizeof(int));
<>

/////////////////////////////////////////////////////////////////////////////

Para declararmos um 'Vetor' de 'Vetores' ('Matriz') dinâmico:

<>
int linhas = 2;
int colunas = 3;

int* *matriz = NULL;

matriz = (int**) calloc(linhas, sizeof(int*));
for (int i = 0; i < linhas; i++){
    matriz[i] = (int*) calloc(colunas, sizeof(int));
}
<>

/////////////////////////////////////////////////////////////////////////////

3° linha do exemplo:

- Inicializar os ponteiros para NULL, para não apontarem para um 'lixo de memória'; (matriz está "apontando" pro 'nada').
- NULL é o valor 0 para ponteiros.
- Já que para um 'vetor' dinâmico usamos um ponteiro, em um 'vetor' de 'vetores' dinâmico usamos um ponteiro de ponteiros; (No exemplo: int* *matriz).

4° linha do exemplo:

- Usando calloc, alocamos 2 (número de linhas da matriz) elementos do tamanho de um ponteiro de inteiros cada.
- O 'calloc' retorna o endereço base do bloco alocado (endereço do primeiro elemento do bloco) para a 'matriz'.
- Como o primeiro elemento do bloco é um ponteiro, quando chamamos a 'matriz', os elementos das linhas são divididos precisamente no tamanho de um ponteiro cada. (img 'alocandoAsLinhasDaMatriz.png')
- 'Calloc' atribui NULL(valor 0) para os ponteiros.
- Basicamente, para cada dimensão que adicionamos a um 'array', adicionamos um '*' no ponteiro incial:
Vetor(1d) = *
Matriz(2d) = **
Matriz(3d) = ***

5°, 6° e 7° (for) linha do exemplo:

- O for irá rodar 2 vezes (número de linhas que declaramos).
- Em cada volta, iremos alocar um 'vetor' de inteiros, com 3 elementos (número de colunas).
- O enderço base do primeiro 'vetor' será armazenado pela primeira linha, e o do segundo vetor, pela segunda linha. (img 'alocandoAsColunasDaMatriz.png')
- Diferente da 'matriz' estática, a 'matriz' dinâmica não irá garantir que as colunas de cada linha sejam armazenadas de forma sequencial.

- É possível acessar normalmente o valor da 'matriz' com: matriz[i][j];

>>>>>>>>>>
Resumindo:
<<<<<<<<<<

- A variável inicial da 'matriz' 2d é um ponteiro de -> ponteiros para -> inteiros.
- As linhas são ponteiros de -> inteiros.
- AS colunas são inteiros.

Matriz(int**) -> linhas(int*) -> colunas(int);