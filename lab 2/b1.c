#include <stdio.h>
int aprovacao(){

    float media;
    int freq;
    

    printf("Digite sua média : \n");
    scanf("%f" , &media);

    printf("Digite a porcentagem da sua frequência: \n");
    scanf("%d", &freq);

    if(freq < 75){
        printf("Reprovado");
    }

    else if (freq >= 75 && media >= 7.5){
        printf("Aprovado");
    }

    else{
        printf("Exame");
    }

    return 0;


}

int main(){
    aprovacao();

    return 0;
}