#include <stdio.h>

int main(){
    int num1, num2;
    int soma, sub, mult;
    float div;
    
    printf("Digite um número:\n");
    scanf("%d", &num1);

    printf("Digite outro número:\n");
    scanf("%d", &num2); 
    
   
    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2; 
    
    printf("A soma é: %d\n", soma);
    printf("A subtração é: %d\n", sub);
    printf("A multiplicação é: %d\n", mult);
    printf("A divisão é: %.2f\n", div);
 
    return 0;
}
   