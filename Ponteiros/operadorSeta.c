// [Linguagem C] Registros e Ponteiros: Operador Ponto vs. Operador Seta
#include <stdio.h>
#include <locale.h> // necessário para usar setlocale
#include <string.h> // necessário para usar a função "strcpy"

typedef struct {
  char nome[50];
  char apelido[30];
} rgFilho;

int main() {
  setlocale(LC_ALL, "Portuguese");

  rgFilho filho;

  strcpy(filho.nome, "Joaquim Bertol");
  strcpy(filho.apelido, "Joca");

  printf("1) Variável registro com o operador ponto (.)\n");
  printf("Nome...: %s\n", filho.nome);
  printf("Apelido: %s\n\n", filho.apelido);

  rgFilho *p;
  p = &filho;

  printf("2) Variável ponteiro com o operador seta (->)\n");
  printf("Nome...: %s\n", p->nome);
  printf("Apelido: %s\n\n", p->apelido);

  printf("3) Operador ponteiro com o operador ponto (.)\n");
  printf("Nome...: %s\n", (*p).nome);
  printf("Apelido: %s\n\n", (*p).apelido);

  return(0);
}