#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// --- Funciones que faltaban ---
int suma(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return a - b;
}

int multi(int a, int b) {
    return a * b;
}
// ---------------------------------

int main() {
    int num1 = 12;
    int num2 = 3;

    int op1 = suma(num1, num2);
    printf("Suma: %i\n", op1); // Se corrigió el printf

    int op2 = resta(num1, num2);
    printf("Resta: %i\n", op2); // Se corrigió la línea 10 y 11

    int op3 = multi(num1, num2);
    printf("Multiplicacion: %i\n", op3);

    return 0;
}
