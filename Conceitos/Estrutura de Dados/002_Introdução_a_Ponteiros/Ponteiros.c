Um ponteiro guarda um enderço de memória de uma variável que possua um tipo

Exemplo: 


Jogador_do_Barcelona Messi -> 10;

Variável: Messi; 
Tipo: Jogador_do_Barcelona;
Valor: 10; (número da camisa do jogador)
Endereço: Avenida_do_Messi; (&Messi (no código))


Carteiro_dos_Jogadores_do_Barcelona Jaiminho -> Avenida_do_Messi;

Variável: Jaiminho;
Tipo: Carteiro_dos_Jogadores_do_Barcelona;
Valor: Avenida_do_Messi;
Endereço: Rua_do_Jaiminho; (&Jaiminho)



jaminho = &messi;

endereço: 
&jaiminho = Rua_do_Jaiminho;

valor: 
jaiminho = Avenida_do_Messi;

conteúdo de um endereço -> (*): 
*(jaiminho) = *(Avenida_do_Messi) = Messi = 10;




Jogador_do_Real_Madrid Zidane = 5.50;

Variável: Zidane;
Tipo: Jogador_do_Real_Madrid;
Valor: 5.50;
Endereço: Rua_do_Zizu; (&Zidane)


Carteiro_dos_Jogadores_do_Real_Madrid Mario -> Rua_do_Zizu;

Variável: Mario;
Tipo: Carteiro_dos_Jogadores_do_Real_Madrid;
Valor: Rua_do_Zizu;
Endereço: Rua_do_Mario; (&Mario)




Mario = &Zidane;

endereço: 
&Mario = Rua_do_Mario;

valor: 
Mario = Rua_do_Zizu;

conteúdo de um endereço -> (*): 
*(Mario) = *(Rua_do_Zizu) = Zidane = 5.50;






O Mario é um ponteiro que armazena endereços de memória com variáveis do tipo Float, Enquanto o Jaiminho guarda endereços de memória com variáveis do tipo int.
(*Float) e (*int)