#include <stdio.h>
#include <stdbool.h>

int main(){
    // variável
    int palpite;

    //imprimir a msg
    printf("Escolha um número de 1 a 100, mas não me fale. \n  Eu vou adivinhar");
    printf("Só me diga se o número é maior ou menor que meu palpite. \n");

    // repetir enquanto não acertar
    int inicio = 1;
    int fim = 100;
    int tentativas = 0;
    bool acertei = false;
    while (!acertei){
        // dar palpite (é o número na metade da faixa de números)
        int palpite = (inicio + fim) / 2; 
        tentativas++;
        printf("meu palpite é %d (tentativa %d)  \n", palpite, tentativas);
        
        //pedir feedback
        printf("Digite 1 se acertei, 2 se for maior ou 3 se for menor: ");
        int feedback;
        scanf("%d", &feedback);

    
        // se acertou (vitória)
        if (feedback == 1){
            printf("Acertei!!");
            acertei = true;

        }

        // se maior - palpite sera o número na metade da faixa superior
         else if (feedback == 2){
            inicio = palpite + 1;
       }

        

        // se menor - palpite sera o número na metade da faixa inferior
        else {
            fim = palpite - 1;
        }

    }


}