#include <stdio.h>
#include <stdlib.h>

int funcao(int numeros[]);
int main(){
	
	int i,numeros[10];
	
	for(i=0;i<10;i++){
		printf("Numero%i: ",i);
		scanf("%i",&numeros[i]);
	}
	
	funcao(numeros);

	for(i=0;i<10;i++){
		printf("\n %i",numeros[i]);
	}
}

int funcao(int numeros[]){
	
	int i,j,*p,aux;
	
	p = numeros;

	for(i=0;i<10;i++){
		for(j=i + 1;j<10;j++){
			if(*(p + i) >*(p + j) ){
				aux = *(p + i);
				*(p+i) = *(p+j);
				*(p+j) = aux;				
			}
		}
	}

}
