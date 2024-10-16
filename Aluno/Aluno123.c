#include <mysql/mysql.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[255];
    int matricula;
    int anoIngresso;
    char curso[100];
} Aluno;

// Função para conectar ao MySQL e gravar os dados
void GravaAlunoNoBanco(Aluno AlunoTeste) {
    // Inicializa uma conexão com o banco de dados
    MYSQL *conn;
    conn = mysql_init(NULL);

    // Conecta ao banco (host, usuário, senha, nome_do_banco)
    if (conn == NULL || mysql_real_connect(conn, "localhost", "root", "senha", "AlunoDB", 0, NULL, 0) == NULL) {
        printf("Erro de conexão ao banco de dados: %s\n", mysql_error(conn));
        return;
    }

    // Cria a query de inserção
    char query[500];
    snprintf(query, sizeof(query),
        "INSERT INTO Aluno (nome, matricula, anoIngresso, curso) VALUES ('%s', %d, %d, '%s')",
        AlunoTeste.nome, AlunoTeste.matricula, AlunoTeste.anoIngresso, AlunoTeste.curso);

    // Executa a query
    if (mysql_query(conn, query)) {
        printf("Erro ao inserir dados: %s\n", mysql_error(conn));
    } else {
        printf("Dados inseridos com sucesso!\n");
    }

    // Fecha a conexão
    mysql_close(conn);
}

int main() {
    Aluno AlunoTeste;

    printf("Nome do aluno: ");
    fflush(stdin);
    fgets(AlunoTeste.nome, 255, stdin);
    AlunoTeste.nome[strcspn(AlunoTeste.nome, "\n")] = 0; // Remove o newline

    printf("Matricula: ");
    scanf("%d", &AlunoTeste.matricula);

    printf("Ano de Ingresso: ");
    scanf("%d", &AlunoTeste.anoIngresso);

    printf("Curso: ");
    fflush(stdin);
    fgets(AlunoTeste.curso, 100, stdin);
    AlunoTeste.curso[strcspn(AlunoTeste.curso, "\n")] = 0; // Remove o newline

    // Grava os dados no banco
    GravaAlunoNoBanco(AlunoTeste);

    return 0;
}
