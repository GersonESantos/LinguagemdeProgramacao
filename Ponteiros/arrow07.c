#include <stdio.h>

struct info
{ 
    char *name; 
    char *Apelido; 
};

int main()
{
    //(Estática): Mais simples e eficiente para casos em que não há necessidade de alocação dinâmica.
    // Declarando a estrutura diretamente
    struct info M;

    // Inicializando os campos
    M.name = "Gerson Eustaquio Dos Santos";
    M.Apelido = "GersonES";

    // Imprimindo os dados
    printf("Minhas Informações:");
    printf("\nNome:    %s", M.name);
    printf("\nApelido: %s", M.Apelido);

    

    return 0;
}
