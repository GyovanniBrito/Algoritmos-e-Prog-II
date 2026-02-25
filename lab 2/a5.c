#include <stdio.h>
int main(){

    float raio, area;

    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    area = 3.1415926 * raio * raio;

    printf("Um círculo com raio %.2f tem área igual a %.2f \n", raio, area);
    
    return 0;

}