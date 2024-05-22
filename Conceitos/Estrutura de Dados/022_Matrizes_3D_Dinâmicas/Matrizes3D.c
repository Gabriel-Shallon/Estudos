[[[[[[[[[[[
MATRIZES 3D
]]]]]]]]]]]

Uma matriz comum, é um vetor bidimensional (2D, Duas dimensões), oque significa que esse vetor, possui duas coordenadas, diferente de um vetor convencional, que possui apenas uma coordenada. Logo, nessa mesma lógica, matrizes 3D possuem mais uma dimensão ou, uma coordenada adicional. 
Na física, seria como adicionar profundidade num map que havia apenas duas dimensões. Para cada coordenada de largura e altura (linha e coluna), haverá várias possíveis possições na >profundidade<.

Numa matriz dinâmica convencional, colocamos o endereço das colunas dentro das linhas, representando que cada linha possui diversas colunas.
Já numa matriz 3d, colocamos o endereço das colunas dentro das linhas, e o endereço da profundidade dentro das colunas. Ou seja, cada linha possui várias coordenadas para suas colunas, e cada coluna possui coordenadas para sua profundidade.

Esse conceito pode ser expandido para quantas dimensões nós quisermos, mas em questão de utilidade, não se é muito usado mais que 3 dimensões.

>>>>Estáticamente:<<<<
///////////////////////
int matriz[2][3][4];

2 fatias 
3 linhas
4 colunas
///////////////////////


>>>>Dinâmicamente:<<<<
///////////////////////////////////////////////////////////
    int fatias = 2;
    int linhas = 3;
    int colunas = 4;
    //Fatias
    int*** matriz = (int***) calloc(fatias, sizeof(int**));
    //Linhas
    for (int i = 0; i < fatias; i++){
        matriz[i] = (int**) calloc(linhas, sizeof(int*));
    }
    //Colunas
    for (int i = 0; i < fatias; i++){
        for (int j = 0; i < linhas; j++){
            matriz[i][j] = (int*) calloc(colunas, sizeof(int));
        }
    }
///////////////////////////////////////////////////////////
