1° - PASSAGEM POR VALOR: 

É feito uma cópia do >argumento/valor< (ou variável), que pode ser usada e alterada dentro da função sem afetar a variável da qual foi gerada.

Isso significa que:

Quando você chamar uma função passando parametros pra ela por valor, os parametros terão uma cópia do valor deles para serem usados dentro da função, permetindo alterar esse valor copiado sem alterar oque está fora.

EXEMPLO:
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int soma(int x, int y){
    
    int z = x + y;

    return z;
}

int a = 10;
int b = 20;
int c;

c = soma(a, b);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Nesse caso, quando a função é chamada, ela cria duas variáveis (que são uma cópia dos valores passados pra ela) em uma outra região da memória. (Ela cria também um espaço na memória para o Z, que passará o valor para a variável C).

Após terminar a execução, a função terá as cópias e os valores usados dentro dela mesma apagados.

RESUMINDO:
"Ao chamar uma função, o compilador cria uma cópia de todos os parâmetros passados, destruindo-os ao final da esxecução da função."