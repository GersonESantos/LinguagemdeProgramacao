#include <C:\conectorC\include/mysql.h>
#include <stdio.h>

int main() {
    // Inicializa a variável de conexão
    MYSQL *conn;

    // Inicializa a estrutura de conexão
    conn = mysql_init(NULL);

    // Verifica se a inicialização foi bem-sucedida
    if (conn == NULL) {
        printf("Erro ao inicializar MySQL: %s\n", mysql_error(conn));
        return 1;
    }

    // Conecta ao banco de dados MySQL
    if (mysql_real_connect(conn, "localhost", "root", "Gabibi89*", NULL, 3306, NULL, 0) == NULL) {
        // Se a conexão falhar, exibe o erro
        printf("Erro ao conectar ao MySQL: %s\n", mysql_error(conn));
        mysql_close(conn);
        return 1;
    }

    // Conexão bem-sucedida
    printf("Conexão ao MySQL bem-sucedida!\n");

    // Fecha a conexão
    mysql_close(conn);

    return 0;
}