>> Um ponteiro é uma variável que guarda o endereço de uma outra variável <<


int a = 10;

(EndereçoEx.: 5000 (vai de 5000 até 5003, pois int ocupa 4 bytes))
(&a = 5000 (Conforme o endereço de exemplo))

int *p1 = NULL;

(O asterisco(*) define p1 como ponteiro, ponteiro esse que é do tipo int, como é declarado atrás do mesmo)
(Basicamente, p1 guarda endereços de variáveis do tipo int, mas por enquanto ele está vazio (Não está apontando para nada)) 
(EndereçoEx.: 5004 (logo acima do endereço da variável 'a')(Ponteiros precisam de 8 bytes de memória. Nesse caso, ele ocupa 5004->5011))
(&p1 = 5004)

int *p2;

(Ponteiro de variáveis int)
(Como não foi definido como vazio, o valor armazenado no endereço de memória do p2 será um lixo de memória(Uma sequência aleatória de bits))
(&p2 = 5012)




p1 = &a;

(p1 é um ponteiro de int(s) e 'a' é uma variável int, logo, o endereço de memória de 'a' é do tipo int* (int pointer))
(&a (endereço de 'a') é do tipo int*, e p1 é do tipo int*, signicando que p1 é compátivel para armazenar o endereço de 'a')
(p1 = 5000 (p1 está "apontando" para aonde está a variável 'a'))

p2 = p1;

(Como os dois são do mesmo tipo, a afirmação está correta, e significa que o valor em p2 será o mesmo armazenado em p2)
(Se ele fosse receber o endereço de p1, a expressão seria 'p2 = &p1')
(p2 = 5000 (Mesmo valor que p1))

*p2 = 4;

(*p2 representa o conteúdo de p2. O conteúdo de um ponteiro é igual ao valor armazenado no endereço que ele está apontando)
(Ou seja, *p2 = 4; muda o valor da variável 'a', que está no endereço 5000, já que esse é o endereço armazenado em p2)
(Então, *p2 = 4; muda o valor de do endereço 5000 de 10 para 4)
((*p2 = 4) === (a = 4;))
(Como p1 = p2, *p1 também será 4)