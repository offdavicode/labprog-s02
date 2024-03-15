#include <stdio.h>

int main(){
    float dolar, real, conversao;

    printf("Insira a cotação do dolar atual: ");
    scanf("%f", &dolar);

    printf("Quantidade de reais que você deseja converter: ");
    scanf("%f", &real);

    conversao = real / dolar;

    printf("O valor em dolar é: $ %.2f", conversao);

    return 0;
}