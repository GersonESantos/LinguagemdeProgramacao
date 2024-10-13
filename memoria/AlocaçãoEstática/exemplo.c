#include <stdio.h>

int globalVariable = 10; // Variável global (alocação estática)

int main() {
    // Alocação de um array de inteiros (tamanho fixo)
    int staticArray[5] = {1, 2, 3, 4, 5};

    printf("Valor da variavel global: %d\n", globalVariable);

    printf("Elementos do array estatico:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", staticArray[i]);
    }
    printf("\n");

    return 0;
}
