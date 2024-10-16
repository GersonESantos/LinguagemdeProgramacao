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

// Função para gravar os dados do aluno em um arquivo
void GravaAlunoEmArquivo(Aluno AlunoRecebido) {
    FILE *arquivo = fopen("Aluno.txt", "w"); // abre o arquivo em modo de escrita

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }

    fprintf(arquivo, "Nome: %s", AlunoRecebido.nome);
    fprintf(arquivo, "Matricula: %d\n", AlunoRecebido.matricula);
    fprintf(arquivo, "Ano de Ingresso: %d\n", AlunoRecebido.anoIngresso);
    fprintf(arquivo, "Curso: %s", AlunoRecebido.curso);

    fclose(arquivo); // fecha o arquivo
    printf("Dados gravados no arquivo Aluno.txt com sucesso!\n");
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

    // Chamada da função para gravar os dados do aluno no arquivo
    GravaAlunoEmArquivo(AlunoTeste);

    return 0;
}
