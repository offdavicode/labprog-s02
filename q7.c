#include <stdio.h>

int main() {
    int horas, minutos, segundos, horariofinal;

    printf("Vamos transformar o horário em segundos \n");
    printf("Digite o horário no formato HH:MM:SS: ");
    scanf("%d:%d:%d", &horas, &minutos, &segundos);

    horas = horas * 3600;
    minutos = minutos * 60;
    horariofinal = horas + minutos + segundos;

    printf("O horário em segundos ficou: %d\n", horariofinal);
    return 0;
}
