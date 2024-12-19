#include <stdio.h>
int main() {
    char str1[] = "Hello";
    char *str2 = "World";
    printf(" %s\n", str1);
    printf(" %s\n", str2);    
    printf("%p %s\n", str1, str1);
    printf("%p %s\n", str2 , str2); 
    printf("%p %p %s\n", &str1, str1, str1);
    printf("%p %p %s\n", &str2, str2 , str2);    
    return 0;
}