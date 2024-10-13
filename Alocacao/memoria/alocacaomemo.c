// alocação estática ocorre com variáveis globais
//(alocadas fora de uma função) ou quando as variáveis locais 
//(internas a uma função) são alocados usando o modificador ''estatic'',
// uma variável alocada estaticamente mantém seu valor 
//durante toda a vida de um programa, 
//exceto quando explicitamente modificada.
// Exemplo
#include <stdio.h>
int a=0; // variável global, alocada estaticamente
void incrementa(void)
{
    int b=0; // variável local, alocada autoamente
    static int c=0; // variável local, alocada estaticamente
    
    printf("a: %i , b: %i , c: %i\n", a, b, c);
    a++; //2 /check
    b++; //0 /check
    c++; //2 /check
}
int main(void)
{
    int i;
    for(i=0; i<5; i++)
    {
        incrementa();
    }
    return 0;
}
// A saída do programa será:
// a: 0 , b: 0 , c: 0
// a: 1 , b: 0 , c: 1
// a: 2 , b: 0 , c: 2
// a: 3 , b: 0 , c: 3
// a: 4 , b: 0 , c: 4
