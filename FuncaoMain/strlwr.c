#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Ola, mundo! ABCD";
    printf("String original: %s\n", str);

    // Convertendo a string para letras min�sculas
    char *lowercaseStr = strlwr(str);

    printf("String em minusculas: %s\n", lowercaseStr);

    return 0;
}
