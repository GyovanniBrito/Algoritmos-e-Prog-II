#include <stdio.h>
int main(){

    float celsius, fahrenheit;

    printf("Qual a temperatura em graus Celsius : \n");
    scanf("%f", &celsius);

    fahrenheit =  9 / 5 * celsius + 32;

    printf("Uma temperatura de %f graus celsius equivale a %f graus fahrenheit \n", celsius, fahrenheit);

    return 0;
}