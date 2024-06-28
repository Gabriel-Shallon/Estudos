Para compilar um.c no esquema de pastas que estamos usando, precisamos indicar para o compilador em qual pasta está o arquivo .c, que ele leve em consideração a pasta dos headers na compilação, e que o autput vá para a pasta obj:

gcc -c src/floatVector.c -I header -o obj/floatVector.o
gcc -c src/myTime.c -I header -o obj/myTime.o

no compilador, '.' significa o diretório atual, então quando usamos ./, estamos indicando que é um arquivo dentro do diretório que estamos no momento. Dessa forma, podemos colocar da seguinte forma também no compilador:

gcc -c ./src/floatVector.c -I ./header -o ./obj/floatVector.o
gcc -c ./src/myTime.c -I ./header -o ./obj/myTime.o

O -c antes da root do floatVector.c indcia que esse arquivo não tem uma main.