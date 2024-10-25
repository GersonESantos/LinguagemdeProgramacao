
Em uma lista duplamente encadeada como a que você definiu, o último elemento da lista é indicado quando o ponteiro `proximo` é `NULL`. Isso ocorre porque, no último nó, não há outro nó a ser apontado, então `proximo` recebe o valor `NULL` para representar o fim da lista.

Assim, ao percorrer a lista do início ao fim, você sabe que chegou ao último nó quando encontra um nó em que `proximo == NULL`.

Aqui está um exemplo ilustrativo de como isso é usado:

```c
struct nodo {
    int idade;
    float altura;
    char sexo;
    nodo *proximo;
    nodo *anterior;
};

// Exemplo de função para percorrer até o último nó
nodo* encontrarUltimo(nodo* inicio) {
    nodo* atual = inicio;
    while (atual->proximo != NULL) {
        atual = atual->proximo;
    }
    return atual; // Retorna o último nó, onde atual->proximo == NULL
}
```

Essa convenção (`proximo == NULL`) é comum tanto para listas duplamente quanto para simplesmente encadeadas para indicar o final da lista.