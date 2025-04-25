#include <stdio.h>
#include <stdlib.h>



int main(){
    int cont = 0;
    float soma = 0;
    float matiz[12][12];
    char caracter;
    scanf("%c", &caracter);
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            scanf("%f", &matiz[i][j]);
        }
    }
    if (caracter == 'S'){
        for(int i = 0; i < 12; i++){
            for(int j = 0; j < 12; j++){
                if(i < j){
                    soma += matiz[i][j];
                }
            }
        }
        printf("%.1f\n", soma);
    } else if (caracter == 'M'){
        for(int i = 0; i < 12; i++){
            for(int j = 0; j < 12; j++){
                if(i < j){
                    soma += matiz[i][j];
                    cont++;
                }
            }
        }
        float media = soma/cont;
        printf("%.1f\n", (media));
    }
    return 0;
}
