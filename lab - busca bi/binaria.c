#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

void gerar_vetor_ordenado(int v[], int n) {
    srand(time(NULL));
    int atual = 1;
    for(int i = 0; i < n; i++) {
        atual += 1 + rand() % 3;
        v[i] = atual;
    }
}

void imprimir(int v[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

// Exercício 5: Busca Binária com Contador
int busca_binaria(int v[], int n, int e, int *cont) {
    int inicio = 0;
    int fim = n - 1;
    *cont = 0; // Inicializa o contador
    
    while (inicio <= fim) {
        (*cont)++; // Incrementa a cada iteração do laço
        int meio = (inicio + fim) / 2;
        
        if (v[meio] == e) {
            return meio;
        }
        
        if (e < v[meio]) {
            fim = meio - 1;
        } else {
            inicio = meio + 1;
        }
    }
    return -1;
}

int main() {
    int n = 10;
    int dados[10];
    bool sair = false;
    int op, contador;

    gerar_vetor_ordenado(dados, n);

    while (!sair) {
        printf("## Dados: ");
        imprimir(dados, n);
        printf("## Elemento a ser buscado (Busca Binaria) ou -1 para sair: ");
        scanf("%d", &op);

        if (op == -1) {
            sair = true;
        } else {
            // Passa o endereço da variável contador (&contador)
            int indice = busca_binaria(dados, n, op, &contador);
            printf("## Posicao: %d\n", indice);
            printf("## Iteracoes (Contador): %d\n\n", contador);
        }
    }
    printf("\n## Fim!\n");
    return 0;
}