#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int VARIAVEL = 15;
    int *ptr;
    ptr = &VARIAVEL;
    printf("\nConteudo de VARIAVEL:              = %d ", VARIAVEL);
    printf("\nEndereco de VARIAVEL:              = %p ", &VARIAVEL);
    printf("\nConteudo Apontado por ptr     = %d ", *ptr);
    printf("\nEndereco Apontado por ptr     = %p ", ptr);
    printf("\nEndereco de ptr:              = %p ", &ptr);
    *ptr = 73;
    printf("\n-------------------------------------");
    printf("\nConteudo de VARIAVEL:              = %d ", VARIAVEL);
    printf("\nEndereco de VARIAVEL:              = %p ", &VARIAVEL);
    printf("\nConteudo Apontado por ptr     = %d ", *ptr);
    printf("\nEndereco Apontado por ptr     = %p ", ptr);
    printf("\nEndereco de ptr:              = %p ", &ptr);
    return (0);
}
//Ponteiros

