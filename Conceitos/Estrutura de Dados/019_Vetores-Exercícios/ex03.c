#include <stdio.h>
#include <stdlib.h>

int main(){

    char *v;
    for(int i = 0; i < 99999999; i++){
        v = (char*) calloc(1024*10000, sizeof(char));
    }

    return 0;
}