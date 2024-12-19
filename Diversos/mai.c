
#include <stdio.h>

void doSomething(char* myCharPtr)
{
    printf("%s", myCharPtr); 
}

int main() {
    char str1[] = "Hello";
    doSomething(str1);
    return 0;
}