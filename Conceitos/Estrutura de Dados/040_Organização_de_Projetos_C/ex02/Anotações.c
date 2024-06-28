Para compilar um.c no esquema de pastas que estamos usando, precisamos indicar para o compilador em qual pasta está o arquivo .c, que ele leve em consideração a pasta dos headers na compilação, e que o autput vá para a pasta obj:

gcc -c src/floatVector.c -I header -o obj/floatVector.o
gcc -c src/myTime.c -I header -o obj/myTime.o

no compilador, '.' significa o diretório atual, então quando usamos ./, estamos indicando que é um arquivo dentro do diretório que estamos no momento. Dessa forma, podemos colocar da seguinte forma também no compilador:

gcc -c ./src/floatVector.c -I ./header -o ./obj/floatVector.o
gcc -c ./src/myTime.c -I ./header -o ./obj/myTime.o

O -c antes da root do floatVector.c indcia que esse arquivo não tem uma main.




Na pasta 'apps' vamos colocar todos os arquivos .c executáveis (que possuem main)
Na pasta 'bin', iremos colocar todos os arquivos .exe compilados

Para compilar o app.c e direcionar o output para a pasta 'bin', escrevemos o seguinte no terminal:

gcc apps/app.c obj/floatVector.o -I header -o bin/app
gcc ./apps/app.c ./obj/floatVector.o -I ./header -o ./bin/app

Precisamos indicar o arquivo .o na pasta obj para a compilação funcionar.
Se no meu app.c eu estiver usando funções de mais de um obj, usamos o seguinte:

gcc apps/app.c obj/floatVector.o obj/myTime.o -I header -o bin/app
gcc ./apps/app.c ./obj/floatVector.o ./obj/myTime.o -I ./header -o ./bin/app

ou 

gcc apps/app.c obj/*.o -I header -o bin/app
gcc ./apps/app.c ./obj/*.o -I ./header -o ./bin/app
*/

Segunda opção fica meio bugado aqui, mas no terminal funciona kkkk