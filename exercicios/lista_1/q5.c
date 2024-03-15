#include <stdio.h>

int main() {
    float valor,valorfinal;

    printf("Qual o valor da conta?\n");
    scanf("%f", &valor);

    valorfinal = (0.1 * valor) + valor;

    printf("O valor final da conta ficou: %.2f\n", valorfinal);

    return 0;
}
