#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int var = 15;
    int *ptr;
    ptr = &var;
    printf("\nConteudo de Var(var):               = %d ", var);
    printf("\nEndereco de Var(&var):              = %p ", &var);
    printf("\nConteudo Apontado por ptr(*ptr)     = %d ", *ptr);
    printf("\nEndereco Apontado por ptr(ptr)      = %p ", ptr);
    printf("\nEndereco de ptr(&ptr):              = %p ", &ptr);
    *ptr = 73;
    printf("\n-------------------------------------");
    printf("\nConteudo de Var(var):               = %d ", var);
    printf("\nEndereco de Var(&var):              = %p ", &var);
    printf("\nConteudo Apontado por ptr(*ptr)     = %d ", *ptr);
    printf("\nEndereco Apontado por ptr(ptr)      = %p ", ptr);
    printf("\nEndereco de ptr(&ptr):              = %p ", &ptr);
    
    return (0);
}
//Ponteiros

