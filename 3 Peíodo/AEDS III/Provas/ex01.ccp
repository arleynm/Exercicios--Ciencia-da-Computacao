#include <stdio.h>
#include <stdlib.h>


void inserir(int num);

int hash(int num){
    return 5 % 7;
}
int main(){
  inserir(5);


}


void inserir(int num){
    int i = hash(num);
    int valor;
    int tamanho;
    int tamanho_Tab;


    int hash_tabela[5] = {1,2,3,4,5};


    if (hash_tabela[i] == NULL){
        hash_tabela[i] = num;
        
    }else if (valor < tamanho) {
        hash_tabela[tamanho_Tab + valor] = num;
        valor++;
    }
}
