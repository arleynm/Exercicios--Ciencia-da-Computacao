/*
    Faça um programa para receber o: o código, quantidade em estoque, peso e valor de uma
    relação de produtos. A quantidade de itens a serem cadastrados será definida pelo usuário. 
    Após cadastrar todos os produtos liste: o código, valor unitário de cada produto e o valor total 
    dos itens informados. Implemente alocação dinâmica de memória e struct.
*/

#include <stdlib.h>
#include <stdio.h>

struct produto {
    int codigo;
    int quant;
    float peso;
    float valor;
    float valor_total = 0;
};

int main () {
    int quant;
    printf("Digite a quantidade de produtos: ");
    scanf("%d", &quant);

    struct produto Produtos[quant];

    float *d;
    d = (float *)malloc(sizeof(Produtos[quant]));

    for(int i=0; i<quantidade; i++){
        printf("\tProduto %d", i+1);
        printf("\nDigite o codigo: ");
        scanf("%d", &Produtos[i].codigo);
        printf("Digite a quantidade ");
        scanf("%d", &Produtos[i].quant);
        printf("Digite o peso ");
        scanf("%f", &Produtos[i].peso);
        printf("Digite o valor ");
        scanf("%f", &Produtos[i].valor);
        printf("\n");
    }


    for(int i=0; i<quantidade; i++){
        printf("\n\tProduto %d", i+1);
        printf("\nCodigo: %d", Produtos[i].codigo);
        printf("\nQuantidade: %d", Produtos[i].quant);
        printf("\nPeso: %.2f", Produtos[i].peso);
        printf("\nValor: R$%.2f", Produtos[i].valor);
        Produtos[i].valor_total = Produtos[i].valor * Produtos[i].quant;
        printf("\nValor total: R$%.2f", Produtos[i].valor_total);
    }

    return 0;
}   