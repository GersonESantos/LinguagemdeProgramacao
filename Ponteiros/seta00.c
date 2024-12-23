#include <stdio.h>
#include <stdlib.h> // Para malloc
#include <string.h> // Para strcpy
typedef struct
{ 
    char name[50]; 
    char apelido[30]; 
}rgFilho;

int main()
{
    rgFilho filho;

    strcpy(filho.name, "Gerson Eustaquio Dos Santos");
    strcpy(filho.apelido, "GersonES");

    printf("\n\n");
    printf("1) Variavel registro com o operador ponto(.)\n");
    printf("Nome: %s\n", filho.name);
    printf("Apelido: %s\n", filho.apelido);

    rgFilho *p;
    p = &filho;

    printf("\n\n"); 
    printf("2) variavel ponteiro com o operador seta(->)\n");
    printf("Nome: %s\n", p->name);
    printf("Apelido: %s\n", p->apelido);

    printf("\n\n"); 
    printf("3) operador ponteiro com o operador ponto(.)\n");
    printf("Nome: %s\n", (*p).name);
    printf("Apelido: %s\n", (*p).apelido);

    return 0;
}
