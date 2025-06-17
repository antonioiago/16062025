#include <stdio.h>
int soma(int a, int b) {
    return a + b;
}

int subtracao(int a, int b) {
    return a - b;
}

int multiplicacao(int a, int b) {
    return a * b;
}

int divisao(int a, int b) {
    if (b == 0) {
        printf("\nNão é possível dividir por zero.\n");
        return 0;
    }
    return a / b;
}

int main() {
    int numero1, numero2, resultado;
    char operacao;
    char continuar;

    printf("A calculadora ja pode ser utilizada.\n");

    do {
        printf("\nInsira um número: ");
        scanf("%d", &numero1);

        printf("\nEscolha a operação que a calculadora deve utilizar:\n");
        printf("A - Adição\n");
        printf("S - Subtração\n");
        printf("M - Multiplicação\n");
        printf("D - Divisão\n");
        printf("Operação: ");
        scanf(" %c", &operacao);

        printf("\nInsira outro número: ");
        scanf("%d", &numero2);

        switch (operacao) {
            case 'A':
            case 'a':
                resultado = soma(numero1, numero2);
                printf("\nO resultado é: %d\n", resultado);
                break;
            case 'S':
            case 's':
                resultado = subtracao(numero1, numero2);
                printf("\nO resultado é: %d\n", resultado);
                break;
            case 'M':
            case 'm':
                resultado = multiplicacao(numero1, numero2);
                printf("\nO resultado é: %d\n", resultado);
                break;
            case 'D':
            case 'd':
                resultado = divisao(numero1, numero2);
                printf("\nO resultado é: %d\n", resultado);
                break;
            default:
                printf("\nOperação inválida!\n");
                break;
        }

        printf("\nVocê deseja fazer outro cálculo? (Digite q para sair ou qualquer outra tecla para continuar): ");
        scanf(" %c", &continuar);

    } while (continuar != 'q' && continuar != 'Q');

    printf("\nSaindo da calculadora\n");
    return 0;
}
