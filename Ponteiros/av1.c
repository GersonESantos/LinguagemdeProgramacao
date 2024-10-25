#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int x = 18;
    int y = 5;
    int *ptrx, *ptry;

    ptry = &y;
    ptrx = &x;
    *ptrx = *ptry + x;

    printf("\nConteudo de x:               = %d\n", x);
    
    return 0;
}


