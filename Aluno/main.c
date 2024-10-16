#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <winsock2.h>
#include <C:\conectorC\include/mysql.h>

MYSQL *__stdcall obterConexao()
{
    char *servidor = "localhost";
    char *usuario = "root";
    char *senha = "Gabibi89*";
    char *nomeBanco = "aluno";

    MYSQL *conexao = mysql_init(NULL);

    if (!mysql_real_connect(conexao, servidor, usuario, senha, nomeBanco, 0, NULL, 0))
    {
        fprintf(stderr, "\n%s\n", mysql_error(conexao));
        mysql_close(conexao);
        exit(1);
    }
    else
    {
        printf("\nConexao realizada com sucesso!\n");
        return conexao;
    }
}

int main()
{
    MYSQL *conexao = obterConexao();
    return 0;
}