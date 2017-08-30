#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main() {
    int m, n, k;
    if(scanf("%d %d", &n, &m) < 0) printf("Erro de entrada");
    int *vetor = (int *) malloc(n * sizeof(int));
    for(k = 0; k < n; k++){
        if(scanf("%d", &vetor[k]) < 0) printf("Erro de entrada");
    }
    TipoMatriz **matriz = criaMatriz(n);
    preencheMatriz(matriz, vetor, n);
    for(k = 0; k < m; k++){
        getchar();
        seleciona(matriz, vetor, n);
    }
    return 0;
}
