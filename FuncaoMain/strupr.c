#include <stdio.h>

void String_Upper(char string[]) {
    int i = 0;
    while (string[i] != '\0') {
        if (string[i] >= 'a' && string[i] <= 'z') {
            string[i] = string[i] - 32;
        }
        i++;
    }
}

int main() {
    char str[100];
    printf("Digite uma string para converter em mai�sculas: ");
    gets(str);
    String_Upper(str);
    printf("String em mai�sculas: %s\n", str);
    return 0;
}
