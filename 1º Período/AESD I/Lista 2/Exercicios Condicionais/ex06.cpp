/*Faça um programa que faça 5 perguntas para uma pessoa sobre um crime. As perguntas são:
  a. "Telefonou para a vítima?"
  b. "Esteve no local do crime?"
  c. "Mora perto da vítima?"
  d. "Devia para a vítima?"
  e. "Já trabalhou com a vítima?"
  O programa deve no final emitir uma classificação sobre a participação da pessoa no crime. Se a pessoa
  responder positivamente a 2 questões ela deve ser classificada como "Suspeita ", entre 3 e 4 como "Cúmplice"
  e 5 como "Assassino". Caso contrário, ele será classificado como "Inocente". 
*/

#include <stdlib.h>
#include <stdio.h>


int main()
{	
	int p1,p2,p3,p4,p5,pontos = 0;
	
	
	printf("Telefonou para a vitima? [1]-Sim [2]-Nao\n");
	scanf("%i",&p1);
	
	printf("Esteve no local do crime [1]-Sim [2]-Nao\n");
	scanf("%i",&p2);
	
	printf("Mora perto da vitima? [1]-Sim [2]-Nao\n");
	scanf("%i",&p3);
	
	printf("Devia para a vitima? [1]-Sim [2]-Nao\n");
	scanf("%i",&p4);
	
	printf("Ja trabalhou com a vitima? [1]-Sim [2]-Nao\n");
	scanf("%i",&p5);
	
	if ( p1 == 1)
    {
		pontos = pontos + 1;
	}
	
	if (p2 == 1)
    {
		pontos = pontos + 1;
	}
	if (p3 == 1)
    {
		pontos = pontos + 1;
	}
	if (p4 == 1)
    {
		pontos = pontos + 1;
	}
	if (p5 == 1)
    {
		pontos = pontos + 1;
	}
	if (pontos == 2)
    {
		printf("Suspeito");
	}
	if (pontos == 3 || pontos == 4)
    {
		printf("Cumplice");
	}
	if (pontos ==5)
    {
		printf("Assasino");
	}
	if (pontos == 0 || pontos == 1)
    {
		printf("Inocente");
	}
}