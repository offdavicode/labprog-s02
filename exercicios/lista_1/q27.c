#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2, num3;
    float media_aritmetica, media_geometrica;

    printf("Digite três números em ponto flutuante: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    media_aritmetica = (num1 + num2 + num3) / 3;

    media_geometrica = pow(num1 * num2 * num3, 1.0 / 3.0);

    printf("A média aritmética é: %.2f\n", media_aritmetica);
    printf("A média geométrica é: %.2f\n", media_geometrica);

    return 0;
}
