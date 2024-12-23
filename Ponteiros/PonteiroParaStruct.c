#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int matricula;
    float nota;
}taluno;
int main(){
    //a1 é um struct do tipo taluno

    taluno a1;
    //ptrAluno é um ponteiro do tipo taluno que
    //recebe o endereço de a1
    taluno *ptrAluno = &a1; 
    a1.matricula = 123;
    a1.nota = 10;
    //exibindo dados usando o struct diretamente usando o operador ponto

    printf("Matricula: %d\n", a1.matricula);
    printf("Nota: %.2f\n", a1.nota);
//podemos acessar ou atribuir valores usando o ponteiro (*ptrAluno)

    (*ptrAluno).matricula = 456;
    (*ptrAluno).nota = 9.5;

//exibindo dados usando um ponteiro para struct

    printf("Matricula: %d\n", (*ptrAluno).matricula);
    printf("Nota: %.2f\n", (*ptrAluno).nota);

//ptrAluno-> substitui (*ptrAluno). de forma mais simples

    ptrAluno->matricula = 789;
    ptrAluno->nota = 8.5;

//ptrAluno->matricula é equivalente a (*ptrAluno).matricula
//ptrAluno->nota é equivalente a (*ptrAluno).nota
    printf("Matricula: %d\n", ptrAluno->matricula);
    printf("Nota: %.2f\n", ptrAluno->nota);

    return 0;
}