#include "dummy.h"
#include "floatVector.h"
// Fazer esses dois include's vai causar um erro, pois dentro do floatVector.h, também estamos dando um include no dummy.h, e o compilador vai entender que estamos tentando redefinir o tipo abstrato de dados "dummy", oque não funciona.

int main(){
    hello();

    return 0;
}

//Como demos include no floatVector.h tbm, na hora de compilar usamor:
// gcc testIncludeGuards.c dummy.o floatVector.o -o testIncludeGuards