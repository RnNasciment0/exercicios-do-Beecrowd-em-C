#include <stdio.h>

double valorAproximado(int n) {
    if (n == 0) {
        return 0;
    } else {
        return 1.0 / (2.0 + valorAproximado(n - 1));
    }
}

double raizQuadrada(int n) {
    return 1.0 + valorAproximado(n);
}

int main() {
    int n;
    double resultado;
    scanf("%d", &n);
    resultado = raizQuadrada(n);
    printf("%.10f\n", resultado);
    return 0;
}
