#include <stdio.h>

int main() {
    int x, n, produto;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    produto = x << n;

    printf("O produto de %d por 2 elevado a %d é: %d\n", x, n, produto);

    return 0;
}
