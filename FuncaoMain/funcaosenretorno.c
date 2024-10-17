#include <stdio.h>

// Função sem retorno (void), apenas imprime uma mensagem
void imprimeMensagem() {
    printf("Essa é uma função sem retorno!\n");
}

// Função com retorno (int), retorna a soma de dois números
int soma(int a, int b) {
    return a + b;
}

int main() {
    // Chamando a função sem retorno
    imprimeMensagem();

    // Declarando variáveis
    int num1, num2, resultado;

    // Solicitando entrada do usuário
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    // Chamando a função com retorno e armazenando o resultado
    resultado = soma(num1, num2);

    // Exibindo o resultado da soma
    printf("A soma de %d e %d é: %d\n", num1, num2, resultado);

    return 0;
}
