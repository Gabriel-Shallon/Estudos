#include "floatVector.h"

int main(){

    floatVector *vector = create(10);
    print(vector);

    fullFill(vector);
    print(vector);

    destroy(&vector);

    return 0;
}

// Por encapsulamento, nos referimos ao fato de que a nossa main, aqui no 'app', não tem acesso a definição das da estrutura do vetor, já que acessamos o arquivo .h, e não diretamente o .c, que implementa as funções. Por isso precisamos criar funções que retornem as informações de interesse, como a função size, capacity, e todas as outras, já que fazer um 'vector->data[index]' não funcionaria. Por isso se chama encapsulamento, pois a execução não tem acesso direto a suas funções.

// Basicamente, com encapsulamento, tudo que for implementado no 'floatVector.c' não será acessível ao usuário, apenas as especificações no arquivo 'floatVector.h".
// Se uma funçõ criada no arquivo .c não for especificada no .h, ela só poderá ser utilizada dentro do .c, por exemplo: poderiamos criar uma função que checa se o vetor está cheio antes de permitir o append de adicionar um valor no vetor. Como seria apenas para o uso do append, não precisariamos deixa-lá acessível.