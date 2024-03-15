#include <stdio.h>

int main(){
    int num,c,d,u,num_invertido;

    printf("Digite um número de três dígitos: ");
    scanf("%d",&num);

    c = num / 100;
    d = (num % 100) / 10;
    u = (num % 100) % 10;

    num_invertido = u * 100 + d * 10 + c; 

    printf("Valor do número original: %d\n",num);
    printf("Valor do número invertido: %d\n", num_invertido);

    return 0;
}