#include <stdio.h>
#include <stdlib.h>

int main() {
    int *numeros;
    int n, i;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    numeros = (int *) malloc(n * sizeof(int));
    if (numeros == NULL) {
        printf("Memória insuficiente!\n");
        return 1;
    }
    for (i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i);
        scanf("%d", &numeros[i]);
    }

    // Liberação da memória alocada
    free(numeros);

    return 0;
}