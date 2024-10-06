#include <stdio.h>

int main() {
    int i, numeros[10]; // Declaração da variável i e do vetor numeros

    // Entrada dos valores no vetor
    for (i = 0; i < 10; i++) {
        printf("Digite o %iº valor do vetor: ", i + 1);
        scanf("%i", &numeros[i]); // Use aspas normais
    }

    // Exibindo os valores do vetor
    printf("\nValores digitados:\n");
    for (i = 0; i < 10; i++) {
        printf("%i ", numeros[i]);
    }
    
    printf("\n"); // Para garantir que a saída termina com uma nova linha
    return 0;
}
