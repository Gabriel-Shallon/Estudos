[[[[[[[[[[[[[[[[[[[[[[[[[[
      LAYOUT DE DADOS
]]]]]]]]]]]]]]]]]]]]]]]]]]

--- Layout de dados são estratégias para armazenar 'arrays' multidimensionais de forma linear na >Memória RAM< ---

É importante saber o 'layout' de dados usado para passar corretamente 'arrays' entre programas escritos em diferentes linguagens de programação.

É também importante por questões de >desempenho/performance<:
- 'CPU's processam dados sequencias mais eficientemente do que dadis não sequenciais ---> 'CPU Caching'.

O 'C' e 'C++' usam 'Row-major order'.
Um exemplo de linguagem que usam 'Column-major order' são Fortran, Matlab, R [...].

A diferença entre a 'Row-major order' e da 'Column-major order' é como o 'CPU' utiliza os blocos que o sistema armazena na memória 'cache'.

A memória cache basicamente é uma parte da memória que agiliza o acesso do 'CPU' aos blocos de memória de nosso interesse.

Quando usamos 'Row-major order', 

- 'Row-major order' é mais eficiente pois, o sistema armazena >um< bloco na memória cache de forma >sequêncial<, ou seja, quando chamamos uma linha, todos os elementos seguintes são levados juntos para memória 'cache', e quando chamamos o próximo item, como ele já está no bloco, não é nescessário para o 'CPU' ir atrás de outro bloco fora da memória 'cache'.

- Já o 'Colunm-major order' pega os elementos em meio que um zigue zague na memória, já que, cada vez que um elemento é chamado assim, o 'CPU' tem de procurar um novo bloco de memória, já que o próximo elemento estará na mesma coluna, mas numa linha diferente.

Por exemplo, temos uma matriz m[3][3];

Chamando ela por 'Row-major order', a memória, quando chamar o primeiro elemento, irá copiar um bloco de elementos na memória que estão logo a frente a primeira posição chamada. Dessa forma, quando chamarmos os próximos elementos, eles já estarão armazenados na memória cache, oque facilita o trabalho do 'CPU' 

Por 'Colunm-major order', todas as vezes que chamarmos um posição da 'matriz', iremos copiar um bloco para a memória cache, que não será realmente usado já que o próximo elementos estará em uma nova sequência/bloco na memória.

>> Por isso usamos linha->coluna, pois é mais eficiente :) <<