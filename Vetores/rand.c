#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Para usar a função time()

int main() {
    // Declaração dos vetores e da variável i
    int i, sequencial[20], aleatorio[20];

    // Definindo a semente para gerar valores aleatórios
    srand(time(NULL));

    // Estrutura de repetição de 0 a 19
    for (i = 0; i < 20; i++) {
        // Preenchimento com valores de 0 a 19
        sequencial[i] = i;

        // Preenchimento com valores aleatórios
        aleatorio[i] = rand() % 100; // Exemplo: valores aleatórios entre 0 e 99
    }

    // Imprimindo os vetores
    printf("Vetor Sequencial:\n");
    for (i = 0; i < 20; i++) {
        printf("%d ", sequencial[i]);
    }
    printf("\n\n");

    printf("Vetor Aleatório:\n");
    for (i = 0; i < 20; i++) {
        printf("%d ", aleatorio[i]);
    }
    printf("\n");

    return 0;
}
