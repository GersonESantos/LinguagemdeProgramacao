#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "geeks";
    char str2[] = "Geeks";
    int result = strcmpi(str1, str2);

    if (result == 0) {
        printf("As strings s�o iguais.\n");
    } else if (result < 0) {
        printf("str1 � menor que str2.\n");
    } else {
        printf("str1 � maior que str2.\n");
    }

    return 0;
}
