#include <stdio.h>

int main(){

    int valor;
    printf("Insira um valor inteiro: ");
    scanf("%d", &valor);

    printf("%d elevado ao quadrado: %d\n", valor, valor*valor);
    return 0;
}