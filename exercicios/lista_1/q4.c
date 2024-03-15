#include <stdio.h>

int main() {
    int x;

    printf("Digite um valor inteiro: ");
    scanf("%d", &x);

    printf("Triplo de %d: %d\n", x, 3*x);
    printf("Quadrado de %d: %d\n", x, x*x);
    printf("Metade de %d: %.2f\n", x, (float)x/2); //Conversão para float, para o resultado da divisão ser sempre um número real e não ter erros.

    return 0;
}
