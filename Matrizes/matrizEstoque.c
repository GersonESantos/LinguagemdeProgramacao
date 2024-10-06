#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int i, j, armario, prateleira, estoque[4][5] = {};
    char op;
    setlocale(LC_ALL, "Portuguese");

    // Inserção das caixas na prateleira
    op = 'S';
    while (op == 'S' || op == 's') {
        /* A inserção de valores não é feita de forma sequencial, mas sim de acordo com
           valores escolhidos pelo usuário */
        printf("Digite o número do Armário (de 1 a 5) que deseja utilizar: ");
        scanf("%i", &armario);
        armario = armario - 1;

        printf("Agora digite o número da Prateleira (1 a 4) que deseja utilizar: ");
        scanf("%i", &prateleira);
        prateleira = prateleira - 1;

        // Os valores devem estar dentro dos limites da matriz
        if ((armario >= 0 && armario < 5) && (prateleira >= 0 && prateleira < 4)) {
            if (estoque[prateleira][armario] < 10) {  // Confere se a prateleira está cheia
                // Insere uma nova caixa
                estoque[prateleira][armario] += 1;
                printf("Inserido com sucesso!\n");
                printf("São %i caixas aqui.\n", estoque[prateleira][armario]);
                printf("Colocar outra caixa? (Digite S- Sim ou N- Não): ");
                
                // Captura o próximo caractere corretamente
                scanf(" %c", &op);
            } else {
                printf("A prateleira escolhida está cheia, escolha outra.\n");
            }
        } else {
            printf("O Armário ou a Prateleira escolhida não existe! Escolha outra!\n");
        }
    }

    // Exibe o estoque final
    printf("\nSeu estoque ficou assim:\n");
    for (i = 0; i < 4; i++) {
        printf("\n");
        for (j = 0; j < 5; j++) {
            printf("%i |", estoque[i][j]);
        }
    }

    return 0;
}
