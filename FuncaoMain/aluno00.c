#include <stdlib.h>
#include <stdio.h>
#include <string.h> // Necessário para strcspn
#include <locale.h>

struct ALUNO {
    int identificador;
    char nome[31];
};

// Protótipo da função imprime
void imprime(struct ALUNO aluno2);

int main() {
    setlocale(LC_ALL, ""); // Configura a localidade, se necessário.

    struct ALUNO aluno1;

    // Entrada de dados do aluno
    printf("Digite o identificador do Aluno: ");
    scanf("%i", &aluno1.identificador);

    printf("Digite o nome do Aluno: ");
    getchar(); // Limpa o buffer de entrada
    fgets(aluno1.nome, sizeof(aluno1.nome), stdin);

    // Remove o caractere de nova linha adicionado pelo fgets
    aluno1.nome[strcspn(aluno1.nome, "\n")] = '\0';

    // Imprime os dados do aluno
    imprime(aluno1);

    return 0;
}

// Implementação da função imprime
void imprime(struct ALUNO aluno2) {
    printf("\nIdentificador: %i\n", aluno2.identificador);
    printf("Nome: %s\n", aluno2.nome);
}
