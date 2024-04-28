#include <stdio.h>
#include <stdlib.h>

int main(){

    float z = 2.5;
    float *fp;

    fp = &z;

    printf("*&z = %f\n", *&z);
    printf("*fp = %f\n", *fp);
    printf("**&fp = %f\n", **&fp);

    return 0;
}

// O primeiro print funciona pois ele pede o conteúdo do endereço do 'z', que é 2.5
// O resultado é o mesmo que o de pedir só o 'z'

// O terceiro também funciona pela mesma lógica, como se fosse pedir o conteúdo do conteúdo de um ponteiro de ponteiros, mas na verdade é apenas o conteúdo do conteúdo de um endereço de um ponteiro.


// gcc PonteirodePonteiros02.c -o PonteirodePonteiros02
// ./PonteirodePonteiros02

