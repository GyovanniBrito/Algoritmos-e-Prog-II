#include <stdio.h>
int main(){
    
    int peso;
    float imc, altura;

    printf("Digite o peso em quilogramas: \n");
    scanf("%d", &peso);

    printf("Digite a altura em metros: \n");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    
    printf(" O imc de  uma pessoa com %d kilos, e altura de %f é igual a %f \n", peso, altura, imc);

    return 0;
}