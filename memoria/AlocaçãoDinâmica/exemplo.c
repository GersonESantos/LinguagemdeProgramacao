#include <stdio.h>
#include <stdlib.h>

int main() {
    int n; // Tamanho do array
    printf("Digite o numero de elementos: ");
    scanf("%d", &n);

    // Alocação de memória dinâmica para um array de inteiros
    int *dynamicArray = (int *)malloc(n * sizeof(int));

    // Verificando se a alocação foi bem-sucedida
    if (dynamicArray == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1; // Saída com erro
    }

    // Inicializando o array
    for (int i = 0; i < n; i++) {
        dynamicArray[i] = i + 1; // Preenchendo com valores de 1 a n
    }

    // Exibindo os elementos do array
    printf("Elementos do array dinâmico:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", dynamicArray[i]);
    }
    printf("\n");

    // Liberando a memória alocada
    free(dynamicArray);

    return 0;
}
