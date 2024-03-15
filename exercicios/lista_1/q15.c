#include <stdio.h>

int main() {
    float salario_dia = 50.25;
    int dias_trabalhados;
    float salariobruto, gratificacao, salarioliquido, impostorenda;

    printf("Digite o número de dias trabalhados pelo vendedor: ");
    scanf("%d", &dias_trabalhados);

    salariobruto = salario_dia * dias_trabalhados;

    if (dias_trabalhados <= 10) {
        gratificacao = 0;
    } else if (dias_trabalhados <= 20) {
        gratificacao = salariobruto * 0.20;
    } else {
        gratificacao = salariobruto * 0.30;
    }

    impostorenda = salariobruto * 0.10;

    salarioliquido = salariobruto + gratificacao - impostorenda;

    printf("O valor líquido a ser pago ao vendedor é: R$ %.2f\n", salarioliquido);

    return 0;
}
