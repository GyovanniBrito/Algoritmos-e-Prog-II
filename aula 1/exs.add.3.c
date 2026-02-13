#include <stdio.h>

int main() {
    int horas, minutos_passados;

    printf("Digite a hora atual: ");
    scanf("%d", &horas);

    minutos_passados = horas * 60;

    printf("Desde o inicio do dia, se passaram %d minutos.", minutos_passados);

    return 0;
}