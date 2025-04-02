#include <stdio.h>
int main(){
    //Definindo variáveis
    char produtoA[30] = "Produto A";
    char produtoB[30]= "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2000;

    double valorTotalA;
    double valorTotalB;

    int resultadoA, resultadoB;

    //Imprindo os valores
    printf("Produto %s tem estoque %u e o valor unitario é R$ %.2f\n", produtoA, estoqueA, valorA);
    printf("Produto %s tem estoque %u e o valor unitario é R$ %.2f\n", produtoB, estoqueB, valorB);

    //Comparações com o valor mínimo de estoque

    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("O produto %s tem estoque minimo %d\n", produtoA, resultadoA);
    printf("O produto %s tem estoque minimo %d\n", produtoB, resultadoB); 

    //Comparações com o valor total dos produtosvalorTotalA > valorTotalB);
    printf( "O valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f)?: %d\n",valorA * estoqueA, valorB *estoqueB, (valorA * estoqueA) > (estoqueB * valorB));

    return 0;
}