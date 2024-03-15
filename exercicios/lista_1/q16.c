#include <stdio.h>

int main() {
    float hora_aula, hora_mes, salariobruto, salarioliquido;
    float desconto_inss, desconto_total;

    printf("Digite o valor da hora aula do professor: R$ ");
    scanf("%f", &hora_aula);

    printf("Digite o número de horas trabalhadas no mês: ");
    scanf("%f", &hora_mes);

    salariobruto = hora_aula * hora_mes;

    printf("Digite o percentual de desconto do INSS: ");
    scanf("%f", &desconto_inss);

    desconto_total = salariobruto * (desconto_inss / 100);

    salarioliquido = salariobruto - desconto_total;

    printf("\nSalário Bruto: R$ %.2f\n", salariobruto);
    printf("Salário Líquido: R$ %.2f\n", salarioliquido);

    return 0;
}
