#include <stdio.h>
#include <stdlib.h> // Para malloc

struct info
{ 
    char *name; 
    char *Apelido; 
};

int main()
{
    // Alocando memória para a estrutura
    struct info* M = (struct info*) malloc(sizeof(struct info));

    // Verificar se a alocação foi bem-sucedida
    if (M == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Inicializando os campos
    M->name = "Gerson Eustaquio Dos Santos";
    M->Apelido = "GersonES";

    // Imprimindo os dados
    printf("Minhas Informacoes:");
    printf("\nNome:    %s", M->name);
    printf("\nApelido: %s", M->Apelido);

    // Mostrando equivalência
    printf("\n\nM->name e equivalente a (*M).name\n\n");
    printf("Minhas Informacoes:");
    printf("\nNome:    %s", (*M).name);
    printf("\nApelido: %s", (*M).Apelido);

    // Liberando a memória alocada
    free(M);

    return 0;
}
