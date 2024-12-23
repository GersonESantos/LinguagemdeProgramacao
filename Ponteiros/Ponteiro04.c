#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    int count = 10;
    int *pt = NULL;
    pt = &count;
    setlocale(LC_ALL, "Portuguese");
    
    printf("O valor contido na variavel count e %i\n", count);
    
    printf("O endere�o contido no ponteiro pt � %p\n", pt);
    
    printf("O valor contido no endere�o armazenado no ponteiro *pt � %i\n", *pt);
    
    *pt = 30;
    printf("O valor contido na variavel count agora � %i\n", count);
    printf("O endere�o contido no ponteiro pt agora � %p\n", pt);
    printf("O valor contido no endere�o armazenado no ponteiro *pt agora � %i\n", *pt);

    return 0;
}
