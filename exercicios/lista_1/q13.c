#include <stdio.h>

int main() {
    int A, B, X;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    X= A; // Variável temporária
    A = B;
    B = X;

    printf("Valores após a troca:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);

    return 0;
}
