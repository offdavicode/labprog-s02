#include <stdio.h>

int main() {
    float raio, pi;
    
    pi = 3.14159;

    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    printf("Diâmetro: %.2f\n", 2 * raio);
    printf("Circunferência: %.2f\n", 2 * pi * raio);
    printf("Área: %.2f\n", pi * raio * raio);

    return 0;
}
