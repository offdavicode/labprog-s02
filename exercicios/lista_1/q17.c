#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;

    printf("Digite um valor inteiro: ");
    scanf("%d", &num);

    int absoluto = abs(num);

    printf("O valor absoluto de %d é: %d\n", num, absoluto);

    return 0;
}
