#include <stdio.h>

int main() {
    int tempo_s, horas, minutos, segundos;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &tempo_s);

    horas = tempo_s / 3600;
    minutos = (tempo_s % 3600) / 60;
    segundos = tempo_s % 60;

    printf("Tempo: %d horas, %d minutos e %d segundos.\n", horas, minutos, segundos);

    return 0;
}
