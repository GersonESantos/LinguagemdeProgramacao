#include <stdio.h>
#include <string.h>

// Definição da estrutura Aluno
typedef struct {
    char nome[255];
    int matricula;
    int anoIngresso;
    char curso[100];
} Aluno;

int main() {
    // Criando uma variável do tipo Aluno
    Aluno aluno;

    // Criando um ponteiro para a estrutura Aluno
    Aluno *ptrAluno = &aluno;

    // Usando o operador "->" para acessar e modificar os campos
    strcpy(ptrAluno->nome, "João da Silva");  // Copiando o nome
    ptrAluno->matricula = 12345;             // Definindo a matrícula
    ptrAluno->anoIngresso = 2022;            // Definindo o ano de ingresso
    strcpy(ptrAluno->curso, "Engenharia");   // Copiando o curso

    // Usando o operador "->" para acessar os campos e imprimir
    printf("Dados do Aluno:\n");
    printf("Nome: %s\n", ptrAluno->nome);
    printf("Matrícula: %d\n", ptrAluno->matricula);
    printf("Ano de Ingresso: %d\n", ptrAluno->anoIngresso);
    printf("Curso: %s\n", ptrAluno->curso);

    return 0;
}
