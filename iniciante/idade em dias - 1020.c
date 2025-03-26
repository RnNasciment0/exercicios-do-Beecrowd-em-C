#include <stdio.h>

int main() {
    int total, dia = 0, mes = 0, ano = 0;
    scanf("%d", &total);
    ano = total / 365;
    total = total % 365;
    mes = total / 30;
    dia = total % 30;
    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dia);
    return 0;
}
