// Exemplo
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int *p;
    p = (int *)malloc(sizeof(int));
    if(p == NULL)
    {
        printf("Erro: Memória não alocada\n");
        exit(1);
    }
    *p = 10;
    printf("Valor de p: %i\n", *p);
    free(p);
    return 0;
}
// O programa acima aloca dinamicamente um inteiro, atribui um valor a ele, imprime o valor e, em seguida, libera a memória alocada.
// A função malloc aloca memória no heap e retorna um ponteiro para a memória alocada.
// Se a alocação de memória falhar, malloc retorna NULL.
// A função free libera a memória alocada dinamicamente.
// A função exit encerra o programa.
// Alocacao de memoria dinamica em C
// Alocacao de memoria dinamica em C é feita usando as funções malloc, calloc, realloc e free.
// malloc aloca memória no heap e retorna um ponteiro para a memória alocada.
// calloc aloca memória no heap e retorna um ponteiro para a memória alocada, mas também inicializa a memória alocada com zero.
// realloc altera o tamanho da memória alocada dinamicamente.
// free libera a memória alocada dinamicamente.
