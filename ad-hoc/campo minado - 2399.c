#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int tabuleiro[n];
    int lista[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &tabuleiro[i]);
    }
    if (n == 1){
        printf("%d\n", tabuleiro[0]);
        return 0;
    }
    for (int i = 0; i < n; i ++){
        if (i == 0){
            lista[i] = tabuleiro[i] + tabuleiro[i+1];
        } else if (i == n-1){
            lista[i] = tabuleiro[i] + tabuleiro[i-1];
        } else{
            lista[i] = tabuleiro[i-1] + tabuleiro[i] + tabuleiro[i+1];
        }
    }
    for (int i = 0; i < n; i++){
        printf("%d\n", lista[i]);
    }
    return 0;
}