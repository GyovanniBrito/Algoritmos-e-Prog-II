#include <stdio.h>

int main(){

    float raio;

    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    float area = 3.1415926 * raio * raio;
    float perimetro = 2 * 3.1415926 * raio;

    printf("A área é de %2f cm quadrados e o perímetro é de %2f cm \n", area, perimetro );

    return 0;

}