#include <stdio.h>
#include <string.h>

// Definição da struct Aluno
typedef struct {
    char nome[255];
    int matricula;
    int anoIngresso;
    char curso[100];
} Aluno;

// Função para imprimir os dados do aluno
void ImprimeAluno(Aluno AlunoRecebido) {
    printf("\n\n --------- Lendo os dados da TAD aluno - struct ---------\n\n");
    printf("Nome: %s", AlunoRecebido.nome);
    printf("Matricula: %d \n", AlunoRecebido.matricula);
    printf("Ano de Ingresso: %d\n", AlunoRecebido.anoIngresso);
    printf("Curso: %s", AlunoRecebido.curso);
}

int main() {
    // Definição da variável aluno usando a struct Aluno
    Aluno AlunoTeste;

    printf("Nome do aluno: ");
    fflush(stdin);
    fgets(AlunoTeste.nome, 255, stdin);

    printf("Matricula: ");
    scanf("%d", &AlunoTeste.matricula);

    printf("Ano de Ingresso: ");
    scanf("%d", &AlunoTeste.anoIngresso);

    printf("Curso: ");
    fflush(stdin);
    fgets(AlunoTeste.curso, 100, stdin);

    // Chamada da função para imprimir os dados do aluno
    ImprimeAluno(AlunoTeste);

    return 0;
}
