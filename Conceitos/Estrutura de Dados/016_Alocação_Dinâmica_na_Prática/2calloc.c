]]]]]]]]]]]]]]]
>>> calloc: <<<
]]]]]]]]]]]]]]]

- Aloca um bloco de bytes consecutivos na >memória 'Heap'< e inicializa todos os valores com 0 (NULL para ponteiros).
- Basicamente, a única diferença no resultado final entre o 'malloc' e o 'calloc' é que o calloc inicializa todos os blocos que foram alocados.

Como declarar:
----
tipo* v = (tipo*) calloc(n, sizeof(tipo));
----

n = quantidade de elementos que iremos alocar.
sizeof(tipo) = tamanho do tipo dos elementos que iremos alocar na memória >Heap<.

Essa linha em específico volta o endereço base da região que foi alocada (O endereço da região alocada é armazenado no ponteiro 'v').

Diferente do 'malloc', no 'calloc', nos usamos 2 parâmetros: o primeiro, para a quantidade de blocos a serem alocados, e o segundo, para o tamanho dos blocos que serão alocados. 

Podemos chamar qualquer um dos blocos na memória usando o 'v' com um vetor. EX: v[3]; Isso irá voltar o endereço do 4° elemento alocado acima de 'v' (v[0]), e para acessarmos o conteúdo desse endereço, podemos usar o seguinte: *(v[3]).
O sistema basicamente pega o tipo de 'v', e seleciona 3 blocos com o sizeof(tipo_de_v) acima do endereço base que 'v' armazena.

EXEMPLO:
//////////////////////////////

----
float *v = (float*) calloc(5, sizeof(float));
----

float = 4b;
5 * 4b = 20b;

Como o tamanho da alocação é atribuido usando float, o ponteiro 'v' tem que ser um ponteiro de float(s), para guardar o endereço base da região alocada, já que ela foi alocada especificamente para variáveis do tipo float. 

Nesse caso, 20 bytes serão alocados na memória.

O '(float*)' é opicional, deixando claro que o a variável vai receber um endereço do tipo float

>>> O ponteiro 'v' será armazenado estaticamente na memória 'Stack' <<<