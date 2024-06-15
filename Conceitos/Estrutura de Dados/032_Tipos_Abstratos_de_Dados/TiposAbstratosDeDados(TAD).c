[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[
      Tipos Abstratos de Dados
]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]

Vamos começar com um exemplo:
Uma empresa que cria drones, ao criar um manual, sabe que:

- O usuário não está preocupado >como< as funções do drone e do controle remoto foram >implementadas<. Ele apenas se interessa em utilizar essas funções.
- Mas, o fabricante do drone pode >definir< as especificações das funções que devem estar presentes nos controles remotos. Assim, outras empresas podem >implementá-las<, produzindo diferentes controles remotos para o mesmo drone.
>Especificação/Implementação<

--- Definição ---

- Visa >desvincular< o tipo de dado (estrutura de dados e operações que as manipulam) de sua >implementação<;
- Quando definimos um >Tipo Abstrato de Dados< (TAD) estamos preocupados com >o que ele faz< (especifiação) e >não como ele faz< (implementação);
- Ideia parecida com >Encapsulamento< em Orientação Objeto:
    - Escondemos os dados e detalhes do usuário, fornecendo apenas uma >interface pública< (métodos/operações) para manipulá-los.


                    Sintaxe(assinatura)
                   / 
      Especificação
     /             \
    /               Semântica
TAD-
    \               Representação(estrutura de dados)
     \             /         
      Implementação
                   \
                    Algoritimos


A separação de >especificação< e >implementação<: permite o uso do TAD sem conhecer nada sobre a sua implementação.

Sintaxe EX:
int soma(int a, int b);

Semântica EX: 
// Esta função realiza a soma de duas variáveis do tipo int



Algoritmo EX:
int soma(int a, int b){
    return a+b;
}

Representação EX:
"Quais os tipos de dados ou estruturas que irão realizar as funções."




A >especificação< e a >implementação< são separadas por arquivos diferentes.

- Separamos a >especificação< do tipo em um arquivo de cabeçalho (.h) e sua implementação em um arquivo fonte (.c)
    - seuTAD.h = especifiação do TAD
    - seuTAD.c = implementação do TAD

- Os programas ou outras TADs que utilizam seuTAD devem incluir sua especificação:
#include "seuTAD.h"


Já utilizamos arquivos de cabeçalho, como <stdio.h>, que importa o seu respectivo arquivo de especificações, que vai permitir usarmos suas assinatura, como o printf, scanf, etc.
Esses arquivos que usamos, como o <stdio.h> são como o controle remoto do exemplo do drone: Nós (usuários) sabemos usar as funcionalidades que esse arquivo possui, mas não sabemos as como exatamente essas funcionalidades funcionam.

O arquivo que guarda as funcionalidades seria como o controle, e o <stdio.h> seria como um manual de instruções.


:VANTAGENS:

- Reutilização:
    Abstração de detalhes da implementação
- Facilidade de manutenção:
    Mudanças na implementação do TAD >não afetam< o código fonte dos programas que o utilizam (ocultmanto de informação)
- Corretude:
    Código testado em diferentes contextos.