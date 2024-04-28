Um >Ponteiro de Ponteiros< é uma váriável que guarda o endereço de memória de outro ponteiro que tenha o conteúdo de um tipo especifíco.

///////////////////////////////////////

int a = 10;

Valor = 10
Tipo = Int
EndereçoEx = 5000

///////////////////////////////////////

int *p1 = &a;

Valor = &a (EndereçoEx de a)
Tipo = int* (Ponteiro)
EndereçoEx = 5004

///////////////////////////////////////

int **p2 = &p1;

Valor = &p1 (EndereçoEx de p1)
Tipo = int** (Ponteiro de Ponteiros)
EndereçoEx = 5012

///////////////////////////////////////

**p2 = 99;

'**p2' é o conteúdo do conteúdo que 'p2' está apontando:
**p2 = **(5004) = *(5000) = 10;
O conteúdo de 'p2'(*p2) é oque há dentro de 'p1' (5000), já que 'p2' armazena o endereço de 'p1'. Já o conteúdo do conteúdo de 'p2' é oque há dentro do endereço (10) armazenado no endereço onde 'p2' está apontando (5000).
Então o 10 que era o valor de 'a', será substituido por 99.

