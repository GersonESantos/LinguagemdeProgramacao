#include <stdio.h>

int main() {
//1.Com tipos de dados sizeof é um operador que retorna o tamanho de um tipo de dado ou variável em bytes.
    printf("%d\n", sizeof(char));   // Retorna o tamanho de um char (geralmente 1 byte)
    printf("%d\n", sizeof(int));    // Retorna o tamanho de um inteiro (geralmente 4 bytes)
    printf("%d\n", sizeof(double)); // Retorna o tamanho de um double (geralmente 8 bytes)
//2. Com variáveis sizeof também pode ser usado para retornar o tamanho de uma variável ou array.
    int x = 10;
    printf("Valor de X =%d tamanho do tipo da variavel x %d\n", x , sizeof(x)); // 
    printf("%d\n", sizeof(x)); // Retorna o tamanho do tipo da variável x (4 bytes no caso de int)
 //3. Com arrays
    int arr[10];
    printf("%d\n", sizeof(arr)); // Retorna o tamanho total do array (10 * tamanho de int)

//4. Com ponteiros
int *ptr;
printf("%d\n", sizeof(ptr)); // Retorna o tamanho de um ponteiro (geralmente 4 bytes em sistemas de 32 bits ou 8 bytes em sistemas de 64 bits)

//5. Expressões:
int z = 5, y = 10;
printf("%d\n", sizeof(z + y)); // Avalia o tipo do resultado da expressão (geralmente int) e retorna o tamanho

    return 0;
}


