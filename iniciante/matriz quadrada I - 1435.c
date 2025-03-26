#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    while (n != 0) {
        int resultado[n][n];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                resultado[i][j] = 1;
            }
        }

        int valor = 1;
        int cima = 0, esq = 0, baixo = n - 1, direita = n - 1;

        int meio = (n % 2 == 0) ? n / 2 : (n + 1) / 2;

        while (valor <= meio) {
            for (int i = esq; i <= direita; i++) {
                resultado[cima][i] = valor;
                resultado[baixo][i] = valor;
            }

            for (int i = cima + 1; i < baixo; i++) {
                resultado[i][esq] = valor;
                resultado[i][direita] = valor;
            }

            valor++;
            cima++;
            baixo--;
            esq++;
            direita--;
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%3d", resultado[i][j]);
                if (j < n - 1) {
                    printf(" ");
                }
            }
            printf("\n");
        }
        printf("\n");
        scanf("%d", &n);
    }

    return 0;
}