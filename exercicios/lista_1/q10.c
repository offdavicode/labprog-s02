#include <stdio.h>

int main(){
    float comprimento, largura, altura, volume;

    printf("Vamos calcular o volume de uma caixa retangular!\n");

    printf("Insira o comprimento: ");
    scanf("%f", &comprimento);
    
    printf("Insira a largura: ");
    scanf("%f", &largura);

    printf("Insira a altura: ");
    scanf("%f", &altura);

    volume = comprimento * largura * altura;

    printf("O volume da caixa retangular resultou em: %.2f\n", volume);

    return 0;
}