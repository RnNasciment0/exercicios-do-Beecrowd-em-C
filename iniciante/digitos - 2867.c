#include <stdio.h>
#include <math.h>

int main() {
    int c;
    scanf("%d", &c);

    for (int i = 0; i < c; i++) {
        int n, m;
        scanf("%d %d", &n, &m);
        int digits = (int)(m * log10(n)) + 1;
        printf("%d\n", digits);
    }

    return 0;
}