#include <stdio.h>
#include <string.h>

int main() {
    char dest[50] = "Hello, ";
    const char src[] = "world!";
    size_t n = 5; // N�mero de caracteres a serem concatenados

    printf("Antes da execu��o da fun��o strncat(), dest: %s\n", dest);
    strncat(dest, src, n);
    printf("Ap�s a execu��o da fun��o strncat(), dest: %s\n", dest);

    return 0;
}
