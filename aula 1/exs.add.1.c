#include <stdio.h>

int main() {
    float salarioMinimo;
    float salarioBruto;
    float quantidadeSalarios;

    printf("Digite o valor do salario minimo atual:  ");
    scanf("%f", &salarioMinimo);

   
    printf("Digite o valor do seu salario bruto:  ");
    scanf("%f", &salarioBruto);

    quantidadeSalarios = salarioBruto / salarioMinimo;
   
    printf(" A quantidade de salários %.2f salarios minimos",  quantidadeSalarios);
   

    return 0;
}