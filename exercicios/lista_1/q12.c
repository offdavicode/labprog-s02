#include <stdio.h>

int main() {
    int n1, n2;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &n2);
    
    printf("Soma: %d\n", n1 + n2);
    printf("Produto: %d\n", n1 * n2);
    printf("Diferença: %d\n", n1 - n2);
    printf("Quociente: %d\n", n1 / n2);
    printf("Resto da divisão: %d\n", n1 % n2);
    
    return 0;
}
