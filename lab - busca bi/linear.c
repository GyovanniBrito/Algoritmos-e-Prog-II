#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

void gerar_vetor(int v[], int n) {
    srand(time(NULL));
    for(int i = 0; i < n; i++) {
        v[i] = 1 + rand() % (n * 2);
    }
}

void imprimir(int v[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

// BUSCA LINEAR COM CONTADOR (EXERCÍCIO 2)
int busca_linear(int v[], int n, int e, int *cont) {
    *cont = 0; // Começa o contador em zero
    for(int i = 0; i < n; i++) {
        (*cont)++; // Incrementa toda vez que entra no laço
        if(v[i] == e) {
            return i; // Encontrou!
        }
    }
    return -1; // Não encontrou após percorrer tudo
}

int main() {
    int n = 10;
    int dados[10];
    bool sair = false;
    int op, contador;

    gerar_vetor(dados, n);

    while (!sair) {
        printf("## Dados: ");
        imprimir(dados, n);

        printf("## Elemento a ser buscado (ou -1 para sair): ");
        scanf("%d", &op);

        if(op == -1) {
            sair = true;
        } else {
            // Passamos o endereço da variável contador com &
            int indice = busca_linear(dados, n, op, &contador);
            
            printf("## Posicao: %d\n", indice);
            printf("## Iteracoes (Contador): %d\n\n", contador);
        }
    }

    printf("\n## Fim!\n");
    return 0;
}