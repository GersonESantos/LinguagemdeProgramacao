#include <stdio.h>
 
struct info
{ 
    char *name; 
    char *Apelido; 
};
 
int main()
{
    struct info* M;
     M->name = "Gerson Eustaquio Dos Santos";
     M->Apelido = "GersonES";
 
     printf("Minhas Informacoes:");
     printf("\nNome:    %s", M->name);
     printf("\nApelido: %s", M->Apelido);
//   M->name é equivalente a (*M).name
     printf (" \n\n    M->name e equivalente a (*M).name    \n\n");
     printf("Minhas Informacoes:");
     printf("\nNome:    %s", (*M).name);
     printf("\nApelido: %s", (*M).Apelido);
     return 0;
}