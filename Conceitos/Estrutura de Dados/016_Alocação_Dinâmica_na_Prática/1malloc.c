]]]]]]]]]]]]]]]
>>> malloc: <<<
]]]]]]]]]]]]]]]

- Aloca um bloco de bytes consecutivos na >memória 'Heap'< e devolve o endereço desse bloco.
- Nenhum valor é atribuido aos blocos de bytes, ficando um lixo de memória armazenado nesses blocos.

Como declarar:
----
tipo *v = (tipo*) malloc(n * sizeof(tipo));
----

n = quantidade de elementos que iremos alocar.
sizeof(tipo) = tamanho do tipo dos elementos que iremos alocar na memória >Heap<.

Essa linha em específico volta o endereço base da região que foi alocada (O endereço da região alocada é armazenado no ponteiro 'v')

O 'malloc' tem apenas um valor como parâmetro, oque significa que poderiamos colocar diretamente o número de bytes que queremos alocar. EX: [...] malloc(20); Mas, poderia ocorrer erros de compatibilidade, já que em outros computadores, o tipo da variável que queremos usar pode ter tamanhos variados. Por esse motivo, colocamos o tamanho do tipo que iremos usar vezes quantos blocos desse tipo iremos alocar.

Podemos chamar qualquer um dos blocos na memória usando o 'v' como um vetor. EX: v[3]; Isso irá voltar o endereço do 4° elemento alocado acima de 'v' (v[0]), e para acessarmos o conteúdo desse endereço, podemos usar o seguinte: *(v[3]).
O sistema basicamente pega o tipo de 'v', e seleciona 3 blocos com o sizeof(tipo_de_v) acima do endereço base que 'v' armazena. 

EXEMPLO:
//////////////////////////////

----
float *v = (float*) malloc(5 * sizeof(float));
---- 

float = 4b;
5 * 4b = 20b;

Como o tamanho da alocação é atribuido usando float, o ponteiro 'v' tem que ser um ponteiro de float(s), para guardar o endereço base da região alocada, já que ela foi alocada especificamente para variáveis do tipo float. 

Nesse caso, 20 bytes serão alocados na memória.

O '(float*)' é opicional, deixando claro que o a variável vai receber um endereço do tipo float

>>> O ponteiro 'v' será armazenado estaticamente na memória 'Stack' <<<
