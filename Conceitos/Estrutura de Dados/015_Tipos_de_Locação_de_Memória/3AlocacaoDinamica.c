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