#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 20

// Estrutura de um nó para a lista encadeada
struct Node {
    int num;
    struct Node* prox;
};

// Funções para manipular a lista encadeada
struct Node* criaNo(int valor) {
    struct Node* novo = (struct Node*)malloc(sizeof(struct Node));
    if (novo == NULL) {
        printf("Erro de alocacao de memoria!\n");
        exit(1);
    }
    novo->num = valor;
    novo->prox = NULL;
    return novo;
}

void insereFim(struct Node** head, int valor) {
    struct Node* novo = criaNo(valor);
    if (*head == NULL) {
        *head = novo;
    } else {
        struct Node* temp = *head;
        while (temp->prox != NULL) {
            temp = temp->prox;
        }
        temp->prox = novo;
    }
}

void liberaLista(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->prox;
        free(temp);
    }
}

// Função para ordenar o arranjo usando Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Função para ordenar a lista encadeada via Bubble Sort
void bubbleSortLista(struct Node* head) {
    if (head == NULL) return;
    int trocou;
    struct Node* ptr1;
    struct Node* lptr = NULL;

    do {
        trocou = 0;
        ptr1 = head;

        while (ptr1->prox != lptr) {
            if (ptr1->num > ptr1->prox->num) {
                int temp = ptr1->num;
                ptr1->num = ptr1->prox->num;
                ptr1->prox->num = temp;
                trocou = 1;
            }
            ptr1 = ptr1->prox;
        }
        lptr = ptr1;
    } while (trocou);
}

// Função para remover o terceiro elemento da lista encadeada
void removeTerceiroElemento(struct Node** head) {
    if (*head == NULL || (*head)->prox == NULL || (*head)->prox->prox == NULL) {
        printf("A lista tem menos de 3 elementos.\n");
        return;
    }
    struct Node* temp = *head;
    struct Node* toDelete = temp->prox->prox;
    temp->prox->prox = toDelete->prox;
    free(toDelete);
}

int main() {
    int arranjo[TAMANHO];
    struct Node* lista = NULL; // Cabeça da lista encadeada
    int i;

    // Inicializando o gerador de números aleatórios
    srand(time(0));

    // Gerando e armazenando números aleatórios no arranjo estático
    printf("Criando 20 numeros aleatorios\n\n");
    clock_t inicio = clock();
    
    for (i = 0; i < TAMANHO; i++) {
        arranjo[i] = rand() % 100; // Números aleatórios entre 0 e 99
        printf("Numero aleatorio gerado no arranjo[%d] -> %d\n", i, arranjo[i]);
    }
    
    clock_t fim = clock();
    double tempoArranjo = (double)(fim - inicio) / CLOCKS_PER_SEC;
    printf("\nTempo de criacao do arranjo (memoria estatica): %.2f segundos\n", tempoArranjo);

    // Gerando e armazenando números aleatórios na lista encadeada
    printf("\nCriando a lista encadeada (memoria dinamica)\n");
    inicio = clock();

    for (i = 0; i < TAMANHO; i++) {
        insereFim(&lista, arranjo[i]);
    }

    fim = clock();
    double tempoLista = (double)(fim - inicio) / CLOCKS_PER_SEC;
    printf("\nTempo de criacao da lista encadeada (memoria dinamica): %.2f segundos\n", tempoLista);

    // Ordenando o arranjo estático via Bubble Sort
    printf("\nOrdenando o arranjo estatico via Bubble Sort\n");
    inicio = clock();
    
    bubbleSort(arranjo, TAMANHO);

    fim = clock();
    double tempoOrdenacaoArranjo = (double)(fim - inicio) / CLOCKS_PER_SEC;
    printf("\nTempo de ordenacao do arranjo (memoria estatica): %.2f segundos\n", tempoOrdenacaoArranjo);

    // Mostrando o arranjo ordenado
    printf("\nArranjo apos ordenacao Bubble Sort.\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("arranjo[%d] -> %d\n", i, arranjo[i]);
    }

    // Ordenando a lista encadeada via Bubble Sort
    printf("\nOrdenando a lista encadeada via Bubble Sort\n");
    inicio = clock();
    
    bubbleSortLista(lista);

    fim = clock();
    double tempoOrdenacaoLista = (double)(fim - inicio) / CLOCKS_PER_SEC;
    printf("\nTempo de ordenacao da lista encadeada (memoria dinamica): %.2f segundos\n", tempoOrdenacaoLista);

    // Removendo o terceiro elemento da lista encadeada
    printf("\nRetirando terceiro elemento da lista encadeada\n");
    inicio = clock();
    
    removeTerceiroElemento(&lista);

    fim = clock();
    double tempoRemocao = (double)(fim - inicio) / CLOCKS_PER_SEC;
    printf("\nTempo de remocao da lista encadeada (memoria dinamica): %.2f segundos\n", tempoRemocao);

    // Liberando a memória da lista encadeada
    liberaLista(lista);

    return 0;
}
