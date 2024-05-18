]]]]]]]]]]]]]]]]]
ALOCAÇÃO ESTÁTICA
]]]]]]]]]]]]]]]]]

//////////////////////////////////

int m[2][3]

2 linhas (0 -> 1)
3 colunas (0 -> 2)

(Como nenhum dos elementos da 'matriz' tiveram um valor atribuido a ele, todos os elemento estão preenchidos com 'lixo de memória'.)

Neste cenário, estamos alocando uma 'matriz' na memória 'stack'. Essa 'matriz' é alocada de forma sequencial na memória, ou seja, primeiro todas as colunas da primeira linha são alocadas, após a primeira linha, todas as colunas da segunda linha são alocadas, logo acima da ultima coluna da primeira linha, e assim por diante. (Exemplo visual na pasta de imagens (imagem 'alocaçãoEstáticaDeUmaMatriz.png')).

Na memória, os elementos da 'matriz' exemplo seriam armazenados na seguinte ordem:

1° linha
m[0][0]
m[0][1]
m[0][2]
2° colunas
m[1][0]
m[1][1]
m[1][2]

A quantidade de elementos é igual ao número de linhas vezes o número de colunas.

NumeroDeElementos = NumeroDeLinhas*NumeroDeColunas;

Da mesma forma que 'vetores' estáticos, o endereço da 'matriz' estática é igual ao endereço do primeiro elemento da 'matriz', que é igual a só charmar o nome da 'matriz':

&m == m == &m[0][0]

ATRIBUINDO VALORES PARA OS ELEMENTOS DA 'MATRIZ':

Da mesma forma que os 'vetores', quando criamos uma 'matriz' podemos atribuir valores a ela da seguinte forma:

int m[2][3]={{0,1,2},{3,4,5}}

Para uma vizualizção mais simples dos elementos:

int m[2][3]={{0,1,2},
             {3,4,5}}