#include <stdio.h>

int main() {
    float vreal;

    printf("Digite um valor real: ");
    scanf("%f", &vreal);

    printf("O valor com uma casa decimal: %.1f\n", vreal);
    return 0;
}