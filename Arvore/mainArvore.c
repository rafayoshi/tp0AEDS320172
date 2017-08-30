#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main() {
    int m, n, k, i, j;
    char operacao[4];
    if(scanf("%d %d", &n, &m) < 0) printf("Erro de entrada");
    int *vetor = (int *) malloc(n * sizeof(int));
    for(k = 0; k < n; k++){
        if(scanf("%d", &vetor[k]) < 0) printf("Erro de entrada");
    }

    //cria Arvore

    for(k = 0; k < m; k++){
        if(scanf("%s %d %d", operacao, &i, &j) < 0) printf("Erro de entrada");

    }
    return 0;
}
