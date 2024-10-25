#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    /*
    Declaração dos vetores numeroInscricao e notas, das variáveis
    necessárias ao cálculo da média e da variável de controle
    */
    int i, numeroInscricao[20];
    float notas[20], somatorio = 0, media;

    // código para impressão de forma correta na tela
    setlocale(LC_ALL, "Portuguese");

    // Inserção de valores nos vetores
    for(i = 0; i < 20; i++)
    {
        numeroInscricao[i] = i + 1;
        printf("Número de Inscrição %i - Digite a nota: ", i + 1);
        scanf("%f", &notas[i]);
        somatorio += notas[i];
    }

    // Cálculo e impressão da Média
    media = somatorio / 20;
    printf("\nA média apurada entre as notas dos candidatos foi %.2f\n\n", media);

    // Seleção e impressão dos candidatos aprovados com suas notas
    for(i = 0; i < 20; i++)
    {
        // Se a nota for superior à média apurada, imprime a inscrição e a nota
        if(notas[i] > media)
            printf("Número de inscrição %i - Nota %.2f\n", numeroInscricao[i], notas[i]);
    }
    
    return 0;
}
