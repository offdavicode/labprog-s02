#include <stdio.h>

int main() {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    int resto = num % 2;

    printf("O número %d é %s.\n", num, (resto == 0) ? "par" : "ímpar");

    return 0;
}
