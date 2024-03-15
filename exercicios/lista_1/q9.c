#include <stdio.h>

int main(){
    int valor,sucessor,antecessor;

    printf("Insira um valor inteiro: ");
    scanf("%d", &valor);

    antecessor = valor - 1;
    sucessor = valor + 1;

    printf("Antecessor de %d: %d\n", valor, antecessor);
    printf("Sucessor de %d: %d\n", valor, sucessor);

    return 0;
}