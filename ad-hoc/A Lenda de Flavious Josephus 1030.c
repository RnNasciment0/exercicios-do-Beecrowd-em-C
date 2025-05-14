#include <stdio.h>

int josephus(int n, int k) {
    if (n == 1) {
        return 0;
    } else {
        return (josephus(n - 1, k) + k) % n;
    }
}

int main() {
    int nc;
    scanf("%d", &nc);
    int cont = 1;
    for (int i = 0; i < nc; i++) {
        int n, k;
        scanf("%d %d", &n, &k);
        printf("Case %d: %d\n", cont,josephus(n, k) + 1);
        cont++;
    }

    return 0;
}
