#include <stdio.h>

int main() {
    int i, numeros[10]; // Declaração da variável i e do vetor numeros

    // Entrada dos valores no vetor
    for (i = 0; i < 10; i++) {
        printf("Digite o %i%c valor do vetor: ", i + 1, 248); // Código ASCII para 'º' é 248 em alguns sistemas
        scanf("%i", &numeros[i]);
    }

    // Exibindo os valores do vetor
    printf("\nValores digitados:\n");
    for (i = 0; i < 10; i++) {
        printf("%i ", numeros[i]);
    }
    
    printf("\n"); // Para garantir que a saída termina com uma nova linha
    return 0;
}
