#include <stdlib.h>
#include <stdio.h>
#include <string.h> // Para strcpy e strcspn
#include <locale.h>

struct ALUNO {
    int identificador;
    char nome[31];
};

// Protótipo da função imprime
void imprime(struct ALUNO *aluno);

int main() {
    setlocale(LC_ALL, ""); // Configura a localidade, se necessário.

    // Alocando memória dinamicamente para a estrutura
    struct ALUNO *aluno1 = (struct ALUNO *) malloc(sizeof(struct ALUNO));
    if (aluno1 == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1; // Finaliza o programa em caso de erro de alocação
    }

    // Entrada de dados do aluno
    printf("Digite o identificador do Aluno: ");
    scanf("%i", &aluno1->identificador);

    printf("Digite o nome do Aluno: ");
    getchar(); // Limpa o buffer de entrada
    fgets(aluno1->nome, sizeof(aluno1->nome), stdin);

    // Remove o caractere de nova linha adicionado pelo fgets
    aluno1->nome[strcspn(aluno1->nome, "\n")] = '\0';

    // Imprime os dados do aluno
    imprime(aluno1);

    // Libera a memória alocada
    free(aluno1);

    return 0;
}

// Implementação da função imprime
void imprime(struct ALUNO *aluno) {
    printf("\nIdentificador: %i\n", aluno->identificador);
    printf("Nome: %s\n", aluno->nome);
}
