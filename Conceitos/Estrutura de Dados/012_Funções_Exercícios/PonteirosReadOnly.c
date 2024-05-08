Ao passarmos a refêrencia (ponteiro) para uma função, caso a mesma seja somente leitura (read only), podemos evitar uma alteração acidental de seu calor dentro da função, apenas adicionando a palavra reservada: >>const;<<

EXEMPLO:
/////////////////////////////////////////

void imprimeVector(const int *vector){
    [...]
}

/////////////////////////////////////////