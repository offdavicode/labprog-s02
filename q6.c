#include <stdio.h>

int main () {
    float altura, pesoideal;
    char sexo;

    printf("Vamos calcular o seu peso ideal!\n");
    printf("Por favor, insira sua altura (em metros) e seu sexo (H para Homem ou M para Mulher):\n");
    scanf("%f %c", &altura, &sexo);

    if (sexo == 'h' || sexo =='H') {
        pesoideal = (72.7 * altura - 58);
        printf("Seu peso ideal é: %.2f kg\n", pesoideal);
    }
    else if (sexo == 'm' || sexo == 'M'){
        pesoideal = (62.1 * altura - 44.7);
        printf("Seu peso ideal é: %.2f kg\n", pesoideal);
    }
    else {
        printf("Por favor, insira 'h' para homem ou 'm' para mulher. \n");
    }

    return 0;
}