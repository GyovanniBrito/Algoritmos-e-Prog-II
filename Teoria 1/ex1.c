#include <stdio.h>
int main(){

    int temp_celsius;
    int temp_fah = (temp_celsius * 1.8) + 32;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%d" , &temp_celsius);

    printf(" A temperatura de %2d Celsius, representa %2d em Fahrenheit \n", temp_celsius, temp_fah);

    return 0;
}
