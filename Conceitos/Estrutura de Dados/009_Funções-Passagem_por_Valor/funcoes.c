>Funções< (em linguagem C) são estruturas que agrupam um >bloco de comandos<, que retornam >um único valor< ao final de sua execução.
EXEMPLO:

/////////////////////////////////////////////////////////////////////////////////////////////////

tipo funcao(tipo parametro1, tipo parametro2, ..., tipo parametroN){

    comandos...

    return valor_de_retorno;
}


Os parametros e a função podem ser de qualquer tipo, porém, o retorno deve ser do mesmo tipo que a função.

/////////////////////////////////////////////////////////////////////////////////////////////////

Para criar uma função sem retorno, colocamos o tipo dela como >void<
Uma função também não precisa necessáriamente ter parametros.
EXEMPLO:

void funcao(){

    comandos...

}

/////////////////////////////////////////////////////////////////////////////////////////////////
^^^^^^^^^^^^^^^^

- Toda função deve ter um tipo. Esse tipo determina qual será seu >valor de retorno<
- Uma função pode não ter parametros, basta não informá-los
- Funções não podem ser declaradas dentro de outras funções
- Não é possível criar funções com nomes iguais, mesmo que com tipos diferentes

^^^^^^^^^^^^^^^^
(Em linguagem C)

/////////////////////////////////////////////////////////////////////////////////////////////////

