#include <stdio.h>
#include <stdlib.h>

float soma(float a, float b);
float subtracao(float a, float b);
float multiplicacao(float a, float b);
float divisao(float a, float b);

void main() {
    float num1, num2, resultado;
    char operacao;
    char continuar;
    printf("Bem-vindo à Calculadora!\n");
inicio:
    printf("\nDigite o primeiro número: ");
    scanf("%f", &num1);
    printf("\nEscolha a operação:\n");
    printf("a - Adição\n");
    printf("s - Subtração\n");
    printf("m - Multiplicação\n");
    printf("d - Divisão\n");
    printf("Operação: ");
    scanf(" %c", &operacao);
    printf("\nDigite o segundo número: ");
    scanf("%f", &num2);
    if (operacao == 'a') {
        resultado = soma(num1, num2);
        printf("\nResultado: %f\n", resultado);
    } else if (operacao == 's') {
        resultado = subtracao(num1, num2);
        printf("\nResultado: %f\n", resultado);
    } else if (operacao == 'm') {
        resultado = multiplicacao(num1, num2);
        printf("\nResultado: %f\n", resultado);
    } else if (operacao == 'd') {
        resultado = divisao(num1, num2);
        printf("\nResultado: %f\n", resultado);
    } else {
        printf("\nOperação inválida!\n");
    }
    printf("\nQuer fazer outro cálculo? (Digite 'q' para sair ou qualquer outra tecla para continuar): ");
    scanf(" %c", &continuar);

    if (continuar == 'q') {
        printf("\nSaindo\n");
    } else {
        goto inicio;
    }
}
