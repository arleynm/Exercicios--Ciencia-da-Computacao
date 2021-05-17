/*Crie um sistema que crie que receba um número e imprima a
imagem a seguir.
Caso o usuário digite 5:
xoxox
oxoxo
xoxox
oxoxo
xoxox
*/

#include <stdio.h>
#include <stdlib.h> 

int main()
{
    int numero, i ,linhas 


    printf("informe o numero de linhas:");
    scanf("%i", &linhas);

    for (i = 0;i<linhas/2;i++)
    {
		printf("xoxox\n");
	    printf("oxoxo\n");
	}
    
	if (linhas % 2 != 0){
		printf("xoxox");		
	}
}
