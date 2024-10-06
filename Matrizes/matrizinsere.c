#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaração da Matriz 3x4 de nome numeros
    int i, j, numeros[3][4];

    // Digitação dos valores na Matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("Digite o proximo valor da Matriz: ");
            scanf("%i", &numeros[i][j]); // Use aspas normais
        }
    }

    // Recuperação dos valores da Matriz
    printf("\nValores da Matriz:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%i |", numeros[i][j]); // Use aspas normais
        }
        printf("\n"); // Quebra de linha para formatar a exibição da matriz
    }

    return 0;
}
