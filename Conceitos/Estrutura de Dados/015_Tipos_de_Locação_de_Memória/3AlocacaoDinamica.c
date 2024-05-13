--- Alocação Dinâmica ---

- O espaço para as variáveis é alocado dinamicamente durante a execução do programa.
- Pode ser criada ou eliminada durante a execução do programa, ocupando espaço na memória apenas enquanto está sendo utilizada.
- São alocada na >'Heap'< (free store) da memória ram.

>>>> Liberação de memória feita >manualmente< pelo programador <<<<

A memória só é liberada caso o programa termine sua execução. Mesmo após a sua respectiva função terminar, as variáveis continuarão na memória.

EXEMPLOS:
////////////////////////////////////////////////////////////////////////////////
 
>> PERIGO: <<

int function(){

    for(int i = 0; i < 99999; i++){
    alloc_din(1GB);
    // Alocar Dinamicamente
    }
    // Cada volta no For irá ocupar 1GB na memória na sua execução. Se esse 1GB não for propiamente liberado dentro de cada execução do For, a execução dessa função irá estourar a memória (overflow (kkkkkk 0-0)). 
}

////////////////////////////

O correto seria:

int function(){

    for(int i = 0; i < 99999; i++){
    alloc_din(1GB);
    free(alloc_din);
    // Ou algo assim
    }

}

/////////////////////////////////////////////////////////

int *a = (int*) malloc(10*sizeof(int));
// Memory Allocation
float *b = (float*) calloc(5, sizeof(float));
free(a);
free(b);
// Liberar as variáveis alocadas.

//////////////////////////////////////////////////////////////////////////////////

Por que usar Alocação Dinâmica?

- A alocação dinâmica é o processo que aloca memória em tempo de execução.
- Ela é utilizada quando não se sabe ao certo quanto de memória será necessário para o armazenamento dos elementos.
- Assim, o tamanho de memória necessário é determinado conforme necessidade.
- Dessa forma evita-se o desperdício de memória.

Além disso, >SizeOf(Heap) >>> sizeOf(Stack)<

//////////////////////////////////////////////////////////////////////////////////

>>> malloc: <<<

- Aloca um bloco de bytes consecutivos na >memória 'Heap'< e devolve o endereço desse bloco.

EX:
----
tipo *v = (tipo*) malloc(n * sizeof(tipo));
----

n = quantidade de elementos que iremos alocar.
sizeof(tipo) = tamanho do tipo dos elementos que iremos alocar na memória >Heap<.

Essa linha em específico volta o endereço base da região que foi alocada (O endereço da região alocada é armazenado no ponteiro 'v')

//////////////////////////////

----
float *v = (float*) malloc(5 * sizeof(float));
---- 

float = 4b;
5 * 4b = 20b;

Como o tamanho da alocação é atribuido usando float, o ponteiro 'v' tem que ser um ponteiro de float(s), para guardar o endereço base da região alocada, já que ela foi alocada especificamente para variáveis do tipo float. 

Nesse caso, 40 bytes serão alocados na memória.

O '(float*)' é opicional, deixando claro que o a variável vai receber um endereço do tipo float

>>> O ponteiro 'v' será armazenado estaticamente na memória 'Stack' <<<