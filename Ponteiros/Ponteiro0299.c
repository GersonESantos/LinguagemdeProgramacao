#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
    int *ptrx, **pptrx, x;
    setlocale(LC_ALL, "Portuguese_Brazil");

    
    x = 0;
    

    printf("\nValor de x = %d\n", x);
    printf("Endere�o de x: %x\n", &x);

    ptrx  = &x;
    pptrx = &ptrx;
    printf("\nValor de x = %d", x);
     printf("\nEndere�o apontado por ptrx: %x", ptrx);
      printf("\nValor da variavel x que esta sendo apontada por ptrx: %x", *ptrx);
    printf("\nEndere�o de memoria de variavel ptrx apontado por ptrx: %x", &ptrx);
    return 0;
}