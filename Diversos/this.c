#include <stdio.h>
#include <stdlib.h>

// Pré-declaração da estrutura Retangulo para referência em ponteiros de função
struct Retangulo;

// Definição de ponteiros para funções
typedef double (*CalcularAreaFunc)(struct Retangulo*);
typedef void (*ExibirDimensoesFunc)(struct Retangulo*);
typedef void (*DobrarDimensoesFunc)(struct Retangulo*);

// Estrutura que representa um Retângulo
typedef struct Retangulo {
    double largura;
    double altura;
    CalcularAreaFunc calcularArea;
    ExibirDimensoesFunc exibirDimensoes;
    DobrarDimensoesFunc dobrarDimensoes;
} Retangulo;

// Função que calcula a area
double calcularArea(Retangulo* this) {
    return this->largura * this->altura;
}

// Função que exibe as dimensões
void exibirDimensoes(Retangulo* this) {
    printf("Largura: %.2f, Altura: %.2f\n", this->largura, this->altura);
}

// Função que dobra as dimensões
void dobrarDimensoes(Retangulo* this) {
    this->largura *= 2;
    this->altura *= 2;
}

// Função para criar e inicializar um Retângulo
Retangulo* criarRetangulo(double largura, double altura) {
    Retangulo* ret = (Retangulo*)malloc(sizeof(Retangulo));
    if (ret == NULL) {
        perror("Erro ao alocar memória para Retângulo");
        exit(EXIT_FAILURE);
    }
    ret->largura = largura;
    ret->altura = altura;
    ret->calcularArea = calcularArea;
    ret->exibirDimensoes = exibirDimensoes;
    ret->dobrarDimensoes = dobrarDimensoes;
    return ret;
}

// Função para liberar memória do Retângulo
void destruirRetangulo(Retangulo* ret) {
    free(ret);
}

int main() {
    // Criando um Retângulo
    Retangulo* ret = criarRetangulo(5.0, 3.0);

    // Exibindo dimensões e area
    ret->exibirDimensoes(ret);
    printf("Area: %.2f\n", ret->calcularArea(ret));

    // Dobrando as dimensões e exibindo novamente
    ret->dobrarDimensoes(ret);
    ret->exibirDimensoes(ret);
    printf("Area apos dobrar: %.2f\n", ret->calcularArea(ret));

    // Liberando memória
    destruirRetangulo(ret);

    return 0;
}
