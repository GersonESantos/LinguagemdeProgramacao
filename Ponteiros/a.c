#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void display(int var, int *ptr) {  
    printf("\nConteudo de Var(var):               = %d ", var);
    printf("\nEndereco de Var(&var):              = %p ", (void*)&var);
    printf("\nConteudo Apontado por ptr(*ptr)     = %d ", *ptr);
    printf("\nEndereco Apontado por ptr(ptr)      = %p ", (void*)ptr);
    printf("\nEndereco de ptr(&ptr):              = %p ", (void*)&ptr);
}

int main() {
    int var = 15;
    int *ptr;
    ptr = &var;
    display(var, ptr);

    *ptr = 73;
    display(var, ptr);
    printf("\nEnd.");
    while (1);
    return 0;
}