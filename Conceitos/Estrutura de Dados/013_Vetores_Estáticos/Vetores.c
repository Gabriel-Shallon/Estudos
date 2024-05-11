A forma mais simples de estruturarmos uma >lista de elementos< é por meio de >vetores/array<

EXEMPLO:
//////////////////////////////////////////////////////////////////////////////////////////////////

int v[10];

Nome: V;
Quantidade de Elementos no vetor: 10;
Tipo dos elementos dentro do vetor: int;

- Um vetor de inteiros dimensionado com 10 elementos;
- Reservamos um espaço de memória contínuo para armazenar 10 valores inteiros;
- Se cada int ocupa 4 bytes, a declaração reserva um espaço de >40 bytes<;

//////////////////////////////////////////////////////////////////////////////////////////////////

- O acesso a cada elemento do vetor é feito através de uma >indexação< da variável 'v';
- Em C, a indexação de um vetor varia de 0(zero) a n-1, onde 'n' representa a dimensão do vetor (número de elementos (Em java, usariamos o 'length' pra acessarmos o tamanho do vetor (deve ter algo assim em C, mas ainda não vi))).

v[0] -> Acessa o primeiro elemento de v;
v[1] -> Acessa o segundo elemento de v;

Nesse caso, v[10] não existe.
Se chamassemos o v[10], ele iria acessar outra região de memória que não pertente ao vetor 'v', 4 bytes acima do v[9]
(O exemplo 01 testa isso)