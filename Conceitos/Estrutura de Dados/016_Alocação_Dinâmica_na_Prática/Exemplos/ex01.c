#include <stdio.h>
#include <stdlib.h> // Contém o NULL, malloc, calloc e free

int main(){


    // alocação de vetor estático (memória stack)


    int v_stack[5] = {0, 10, 20, 30, 40};
    
    puts("### VETOR ESTATICO ###");
    printf("&v_stack = %p, v_stack = %p\n", &v_stack, v_stack);
        for (int i = 0; i < 5; i++){
            printf("&v_stack[%d] = %p, v_stack[%d] = %d\n", i, &v_stack[i], i, v_stack[i]);        
        }
    puts("\n");



    // alocação de um vetor dinâmico usando malloc (memória Heap)
    
    
    int *v_heap_malloc = (int *) malloc(5 * sizeof(int));  // Todos os 5 blocos do tamanho de um int cada, terão armazenados em si, lixo de memória

    puts("### VETOR DINAMICO USANDO MALLOC ###");
    printf("&v_heap_malloc = %p, v_heap_malloc = %p\n", &v_heap_malloc, v_heap_malloc);
        for (int i = 0; i < 5; i++){
            printf("&v_heap_malloc[%d] = %p, v_heap_malloc[%d] = %d\n", i, &v_heap_malloc[i], i, v_heap_malloc[i]);        
        }
    puts("\n");



    // alocação de um vetor dinâmico usando calloc (memória Heap)
    
    
    int *v_heap_calloc = (int *) calloc(5, sizeof(int));  // Diferente do malloc, o calloc substitui o lixo de memória pelo respectivo "null" de cada tipo. Nesse caso, o null de um int é 0. O de float seria 0.0, de ponteiro seria null, e assim por diante.

    puts("### VETOR DINAMICO USANDO CALLOC ###");
    printf("&v_heap_calloc = %p, v_heap_calloc = %p\n", &v_heap_calloc, v_heap_calloc);
        for (int i = 0; i < 5; i++){
            printf("&v_heap_calloc[%d] = %p, v_heap_calloc[%d] = %d\n", i, &v_heap_calloc[i], i, v_heap_calloc[i]);        
        }
    puts("\n");


    // NÃO ESTAMOS DESALOCANDO OS VETORES DINÂMICOS, PORTANTO, SÓ SÃO APAGADOS AO TÉRMINO DA EXECUÇÃO DO CÓDIGO INTEIRO.
    // (AINDA NÃO VI O FREE)

    return 0;
}