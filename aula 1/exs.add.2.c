#include <stdio.h>

 int main(){
    float nota_1, nota_2, nota_3;
    int qtd_notas;
    float media;
    
    printf("Digite a quantidade de notas: ");
    scanf("%d", &qtd_notas);

    printf("Qual é a nota 1 : ");
    scanf("%f", &nota_1);

    printf("Qual é a nota 2 : ");
    scanf("%f", &nota_2);

    printf("Qual é a nota 3 : ");
    scanf("%f", &nota_3);

    media = nota_1 + nota_2 + nota_3 / qtd_notas;
    printf("A media é %.2f", media);

    return 0;
 }