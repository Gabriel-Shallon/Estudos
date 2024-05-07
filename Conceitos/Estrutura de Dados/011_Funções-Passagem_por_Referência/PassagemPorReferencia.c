2° - PASSAGEM POR REFERENCIA: 

Na passagem por referência, é passado >a referência de uma variável< (ponteiro) para a função, possibilitando alterar uma variável que é externa a uma função.
(Referência = endereço de memória (mesmo conceito de ponteiros))

Na passagem por valor, uma cópia das variáveis é passada para a função, impedindo alterações externas. Já na passagem por referência, é passado um ponteiro para o parâmetro, permitindo alterar o valor da variável que tem seu valor copiado para o parâmetro. 

EXEMPLO:
///////////////////////////////////////////////////////////////

void soma(int x, int y, int *z){
    *z = x + y;
}

void main(){
int a = 10;
int b = 20;
int c;

soma(a, b, &c);
}

///////////////////////////////////////////////////////////////

Os parametros são 'a' e 'b' são passados por valor.

Já o 'c' é passado por referencia (o seu endereço de memória é enviado para ser recebido por um ponteiro).

Como a função consegue alterar o valor de 'c', usando o endereço de 'c' que foi passado para o ponteiro 'z', não é necessário haver um retorno, já que o resultado pode ser diretamente recebido pelo conteúdo de 'z', que nessa caso é o valor de 'c'.

Todas as variáveis (da função) e seus valores são apagados após o final da função.

///////////////////////////////////////////////////////////////

Por referência você pode retornar mais de um valor na função, já que é possível enviar vários endereços de memória pelos parametros, possibilitando alterar qualquer conteúdo dos endereços usados como parametro. 

EXEMPLO:
///////////////////////////////////////////////////////////////

int SomaESubtracao(int x, int y, int *sub){   
    int z = x + y;
    *sub = x - y;

    return z;
}

SomaESubtracao(a, b, &subtracao);

ou

void SomaESubtracao(int x, int y, int *sub, int *som){   
    *som = x + y;
    *sub = x - y;
}

SomaESubtracao(a, b, &subtracao, &soma);