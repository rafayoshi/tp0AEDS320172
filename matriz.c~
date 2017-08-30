#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "matriz.h"

TipoMatriz **criaMatriz(int tamanho){
    TipoMatriz **matriz = (TipoMatriz **) malloc(tamanho * sizeof(TipoMatriz *));
    int i;
    for(i = 0; i < tamanho; i++){
        matriz[i] = (TipoMatriz *) malloc(tamanho * sizeof(TipoMatriz));
    }
    return matriz;
}

void preencheMatriz(TipoMatriz **matriz, int *vetor, int tamanho){
    int i, j;
    for(i = 0; i < tamanho; i++){
        for(j = 0; j < tamanho; j++){
            matriz[i][j].max = calculaMax(vetor, i, j);
            matriz[i][j].min = calculaMin(vetor, i, j);
            matriz[i][j].soma = calculaSoma(vetor, i, j);
        }
    }
}

int calculaMax(int *vetor, int i, int j){
    int max = vetor[i];
    while(i <= j){
        if(max < vetor[i]){
            max = vetor[i];
        }
        i++;
    }
    return max;
}

int calculaMin(int *vetor, int i, int j){
    int min = vetor[i];
    while(i <= j){
        if(min > vetor[i]){
            min = vetor[i];
        }
        i++;
    }
    return min;
}

int calculaSoma(int *vetor, int i, int j){
 int soma = vetor[i];
    i++;
    while(i <= j){
        soma = soma + vetor[i];
        i++;
    }
    return soma;
}

void somaUm(int *vetor, int i, int j){
    int k;
    for(k = i; k <= j; k++){
        vetor[k]++;
    }
}

void subtraiUm(int *vetor, int i, int j){
    int k;
    for(k = i; k <= j; k++){
        vetor[k]--;
    }
}

void seleciona(TipoMatriz **matriz, int *vetor, int n){
    int i, j;
    char operacao[4];
    if(scanf("%s", operacao) < 0) printf("Erro de entrada");
    getchar();
    if(scanf("%i %i", &i, &j) < 0) printf("Erro de entrada");
    i--;
    j--;
    if(strcmp(operacao, "Add") == 0){
        somaUm(vetor, i, j);
        preencheMatriz(matriz, vetor, n);
    }
    else if(strcmp(operacao, "Sub") == 0){
        subtraiUm(vetor, i, j);
        preencheMatriz(matriz, vetor, n);
    }
    else if(strcmp(operacao, "Min") == 0){
        printf("%i\n", matriz[i][j].min);
    }
    else if(strcmp(operacao, "Max") == 0){
        printf("%i\n", matriz[i][j].max);
    }
    else if(strcmp(operacao, "Sum") == 0){
        printf("%i\n", matriz[i][j].soma);
    }
}
