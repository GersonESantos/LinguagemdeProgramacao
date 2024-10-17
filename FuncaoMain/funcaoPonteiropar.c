//Ponteiro como parâmetro para uma função

#include <stdio.h>
/*void imprimir(int num) {
    printf("Essa e num %d\n" , num);
    num=80;
}
int main() {
    int idade = 20;
    imprimir(idade);
    printf("Essa e a idade %d\n", idade);
    return 0;
}
*/
void imprimir(int *num) {
    printf("Essa e num %d\n" , *num);
    *num=80;
}
int main() {
    int idade = 20;
    imprimir(&idade);
    printf("Essa e a idade %d\n", idade);
    return 0;
}