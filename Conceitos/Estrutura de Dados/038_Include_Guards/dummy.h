// Novo tipo abstrato de dados.
// Os #'s a seguir previnem que o problema do 'testIncludeGuards.c' aconteçam.

#ifndef DUMMY_H
#define DUMMY_H

typedef struct qualquerStruct{
    int val;
} qualquerStruct;

void hello();

#endif

//Isso iria testar se a macro "DUMMY.H" já não foi denida. Se ela realmente não foi definida, o código continuaria para defini-la :D
//Depois que o define DUMMY_H rodar uma vez, a próxima vez que tentarmos definir o arquivo dummy.h, o ifndef ira verificar que a macro DUMMY_H já oi definida, e não rodará o código da header novamente.