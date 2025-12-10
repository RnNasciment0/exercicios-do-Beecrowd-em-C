#include <stdio.h>
#include <stdlib.h>


void qtdPilhas(int figR, int figV) {
    while (figV){
        int temp;
        temp = figR % figV;
        figR = figV;
        figV = temp;
    }
    printf("%d\n", figR);
}


int main(){
    int numCasos, qtdFigurinhasRicardo, qtdFigurinhasVicente, qtd;
    scanf("%d", &numCasos);
    for (int i = 0; i < numCasos; i++) {
        scanf("%d %d", &qtdFigurinhasRicardo, &qtdFigurinhasVicente);
        if (qtdFigurinhasRicardo > qtdFigurinhasVicente) {
            qtdPilhas(qtdFigurinhasRicardo, qtdFigurinhasVicente);

        } else {
            qtdPilhas(qtdFigurinhasVicente, qtdFigurinhasRicardo);

        }
    }
    return 0;
}
