#include <stdio.h>
#include <stdlib.h>

float soma(float a, float b) {
    return a + b;
}

float subtracao(float a, float b) {
    return a - b;
}

float multiplicacao(float a, float b) {
    return a * b;
}

float divisao(float a, float b) {
    if (b != 0)
        return a / b;
    else {
        printf("\nDivisão por zero não funciona\n");
        return 0;
    }
}
