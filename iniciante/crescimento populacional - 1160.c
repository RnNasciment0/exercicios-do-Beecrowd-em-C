#include <stdio.h>
#include <math.h>

void projecao(int popA, float cres1, int popB, float cres2){
    int cont = 0;
    while (cont <= 100 && popA <= popB){
        popA += popA * cres1 / 100;
        popB += popB * cres2 / 100;
        cont += 1;
    }
    if (cont <= 100){
        printf("%d anos.\n", cont);
    } else{
        puts("Mais de 1 seculo.");
    }

}


int main(){
    int teste, populacaoA, populacaoB;
    float crescimento1, crescimento2;

    scanf("%d", &teste);
    for (int  i = 0; i < teste; i ++){
        scanf("%d %d %f %f", &populacaoA, &populacaoB, &crescimento1, &crescimento2);
        projecao(populacaoA, crescimento1, populacaoB, crescimento2);

    }

    return 0;
}
