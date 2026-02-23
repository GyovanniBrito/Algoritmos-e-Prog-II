
#include <stdio.h>
#include <stdbool.h>

int adivinhe(int ini, int ter, int total_tentativas){
    // imprimir a mensagem do desafio
    printf("\n\nEscolha um número entre %d e %d, mas não me fale.\n", ini, ter);
    printf("Eu vou adivinhá-lo em %d tentativas!\n", total_tentativas);
    printf("Só me diga se o nùmero é maior ou menor que meu palpite. \n");
    
    // repetir enquanto não acertar
    int inicio = ini;
    int termino = ter;
    int tentativas = 0;
    bool acertei = false;
    while (!acertei){
        // dar palpite (é o número na metade da faixa de números)
        int palpite = (inicio + termino) / 2; 
        tentativas++;
        printf("meu palpite é %d (tentativa %d)  \n", palpite, tentativas);
        
        // pedir feedback
        printf("Digite 1 se acertei, 2 se for maior ou 3 se for menor: ");
        int feedback;
        scanf("%d", &feedback);
        
        // se acertou: declarar vitória e finalizar programa
        if (feedback == 1) {
            printf("Acertei!!! Aeeee\n");
            acertei = true;
        }
        
        // se maior: palpite será o número na metade da faixa superior
        else if (feedback==2){
            inicio = palpite + 1;
        }
        
        // se menor: palpite será o número na metade da faixa inferior
        else {
            termino = palpite - 1;
        }
    }
    return tentativas;
}

int main() {
    
    // chamar fase 1 (1 a 100 com 7 tentativas)
    int t = adivinhe(1, 100, 7);
    printf("Na fase 1, eu usei %d tentativas!\n", t);
    
    // chamar fase 2 (1 a 200 com 8 tentativas)
    t = adivinhe(1, 200, 8);
    printf("Na fase 2, eu usei %d tentativas!\n", t);
    
    // chamar fase 3 (1 a 400 com 9 tentativas)
    t = adivinhe(1, 400, 9);
    printf("Na fase 3, eu usei %d tentativas!\n", t);


    // chamar fase 4 (1 a 800 com 10 tentativas)
    t = adivinhe(1,800,10);
    printf("Na fase 4, eu usei %d tentativas!\n", t);
    
    return 0;
}