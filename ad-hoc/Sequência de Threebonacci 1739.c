#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// Função para verificar se um número contém o dígito 3
bool contem_digito_3(long long n) {
    char str[20];
    sprintf(str, "%lld", n);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '3') {
            return true;
        }
    }
    return false;
}

// Função para gerar o N-ésimo termo de Fibonacci
long long fibonacci(int n) {
    if (n <= 1) {
        return 1;
    }
    long long a = 1, b = 1, temp;
    for (int i = 2; i < n; i++) {
        temp = b;
        b = a + b;
        a = temp;
    }
    return b;
}

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        int count = 0;
        int fib_index = 1;
        long long fib_num;

        while (count < n) {
            fib_num = fibonacci(fib_index);
            if (contem_digito_3(fib_num) || (fib_num % 3 == 0)) {
                count++;
                if (count == n) {
                    printf("%lld\n", fib_num);
                    break;
                }
            }
            fib_index++;
        }
    }
    return 0;
}
