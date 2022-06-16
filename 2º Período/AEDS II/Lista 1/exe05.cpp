#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define tamanho 5

//tamanho definido como 5
void LeVetor(int vet[]);
void ImprimeVetor(int vet[]);
int PesquisaSequencial(int v[], int pesq);
int main(int argc, char *argv[])
{
    int i;
 
    int vet[tamanho];
    int pos, procura;
    //Lê a vetor
    LeVetor(vet);
 
    printf (" \nDigite um valor para pesquisar: ");
    scanf("%d",&procura);
    //Imprime o vetor na tela
    ImprimeVetor(vet);
 
    pos=PesquisaSequencial(vet,procura);
    if (pos==-1)
    {
        printf("\n\nValor nao encontrado no vetor!");
    }
    // se houver valor encontrado sera retornado o valor e a posicao que
    ele se encontra no vetor
    else
    {
        printf("\n\nValor encontrado na posicao %d", pos+1); 
    }
 
    printf("\n\n"); 
    system("PAUSE>>NULL"); 
    return 0;
}
void LeVetor(int vet[])
{
    int i;
    for (i=0;i<tamanho;i++)
    {
        printf("Informe o valor %d: ", i+1); fflush(stdin);
        scanf("%d", &vet[i]);
    }
}
void ImprimeVetor(int vet[])
{
    int i;
    //nesse for ira imprimir os valores e tambem ira imprimir as posiçoes
    que estes valores se encontravam no vetor
    for (i=0;i<tamanho;i++)
    {
        printf("%d na posicao %d \n", vet[i], i+1);
    }
}
int PesquisaSequencial(int v[], int pesq)
{
    int i;
     // se o valor for encontrado retornara ira como i e senao nao retornar ira como -1
    for(i=0;i<tamanho;i++)
    {
        if(v[i]==pesq)
        {
            return i;
        }
		return -1; // não encontrado
    }
}
