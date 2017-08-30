#ifndef TP020172_MATRIZ_H
#define TP020172_MATRIZ_H

typedef struct TipoMatriz{
    int min, max, soma;
}TipoMatriz;

TipoMatriz **criaMatriz(int);
void preencheMatriz(TipoMatriz **, int *, int);
int calculaMax(int *, int, int);
int calculaMin(int *, int, int);
int calculaSoma(int *, int, int);
void subtraiUm(int *, int, int);
void somaUm(int *, int, int);
void seleciona(TipoMatriz **, int *, int);


#endif //TP020172_MATRIZ_H
