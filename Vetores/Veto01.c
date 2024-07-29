#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    int i;
    char nomes[10][51]; // Vetor de strings para armazenar at� 10 nomes, cada um com at� 50 caracteres

    setlocale(LC_ALL, "Portuguese_Brazil");

    // Preenchimento do vetor de Strings
    for (i = 0; i < 10; i++) {
        printf("Digite o %d� nome completo: ", i + 1);
        fgets(nomes[i], 51, stdin); // Usamos fgets para evitar problemas com gets
        nomes[i][strcspn(nomes[i], "\n")] = '\0'; // Removemos a nova linha do final da string
    }

    printf("\n");

    // Impress�o do vetor inteiro
    for (i = 0; i < 10; i++) {
        printf("%s\n", nomes[i]);
    }

    return 0;
}
