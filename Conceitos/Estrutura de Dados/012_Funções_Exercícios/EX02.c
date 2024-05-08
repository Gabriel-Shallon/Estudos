#include <stdio.h>


void func(int *px, int *py){
    px = py;
    //Após isso, os dois apontam para o 'y', já que foram igualados
    *py = (*py) * (*px);
    // y = y * y
    *px = (*px) + 2;
    // y = y + 2
}



int main(){

    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);

    func(&x, &y);

    printf("x = %d, y = %d\n", x, y);

    return 0;
}