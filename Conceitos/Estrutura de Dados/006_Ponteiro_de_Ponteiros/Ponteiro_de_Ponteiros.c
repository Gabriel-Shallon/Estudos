Um >ponteiro de ponteiros< armazena o endereço de memória de um outro ponteiro
Exemplo:

//////////////////////////////////////////////////////////////////////////////////////////

Jogador_do_Barcelona Messi = 10;

Variável: Messi; 
Tipo: Jogador_do_Barcelona;
Valor: 10; (número da camisa do jogador)
Endereço: Avenida_do_Messi; (&Messi)

//////////////////////////////////////////////////////////////////////////////////////////

Carteiro_dos_Jogadores_do_Barcelona Jaiminho = Avenida_do_Messi;
(Jaiminho = &Messi)

Variável: Jaiminho;
Tipo: Carteiro_dos_Jogadores_do_Barcelona;
Valor: Avenida_do_Messi;
Endereço: Rua_do_Jaiminho; (&Jaiminho)

/////////////////

Para sabermos oque tem dentro do endereço que Sebastiao recebeu, fazemos o seguinte:

*(Jaiminho) = *(Avenida_do_Messi) = 10;

Dizer "o conteúdo de Jaiminho" é o mesmo que "o valor do endereço que Jaiminho carrega", portanto, *(Jaiminho) (conteúdo do jaiminho) é igual ao valor armazenado na 'Avenida_do_Messi', que é 10.

//////////////////////////////////////////////////////////////////////////////////////////

Carteiro_dos_Carteiros_dos_Jogadores_do_Barcelona Sebastiao = Rua_do_Jaiminho;
(Sebastiao = &Jaiminho)

Variável: Sebastiao;
Tipo: Carteiro_dos_Carteiros_dos_Jogadores_do_Barcelona;
Valor: Rua_do_Jaiminho;
Endereço: Rua_do_Sebastiao; (&Sebastiao)

/////////////////

Para sabermos oque tem dentro do endereço que Sebastiao recebeu, fazemos o seguinte:

*(Sebastiao) = *(Rua_do_Jaiminho) = Avenida_do_Messi

Isso significa que o >conteúdo< de Sebastiao -> *(Sebastiao), que é o valor encontrado no >endereço< que ele armazena -> *(Rua_do_Jaiminho), é a 'Avenida_do_Messi'

/////////////////

Para sabermos >oque tem dentro doque tem dentro< do endereço que Sebastiao recebeu, fazemos o seguinte:

**(Sebastiao) = **(Rua_do_Jaiminho) = *(Avenida_do_Messi) = 10

Isso significa que o >conteúdo do conteúdo< de Sebastiao -> **(Sebastiao), é o valor encontrado no >conteúdo do endereço< que ele armazena -> **(Rua_do_Jaiminho), o conteúdo do endereço que ele armazena é 'Avenida_do_Messi', e o conteúdo da 'Avenida_do_Messi' -> *(Avenida_do_Messi) é igual a 10.

Nesse caso, estariamos procurando o valor do conteúdo que o conteúdo do sebastiao carrega.












