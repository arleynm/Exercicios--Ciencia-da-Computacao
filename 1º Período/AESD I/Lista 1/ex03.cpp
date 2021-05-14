/*2- Faça um programa que solicite ao usuário seu sexo (M ou F), dia de nascimento, mês de
   nascimento, ano de nascimento, peso, altura e quanto calça. 
*/

#include <stdlib.h>
#include <stdio.h>

int main
{ 
    char sexo;
    int dia, mes, ano;
    float peso, altura, tamanho;

    printf("Informe seu sexo digite M para masculino e F para feminino:");
    scanf("%s", &sexo);

    printf("Informe sua data de nascimento:");
    scanf("%d", &dia);

    printf("Informe seu mês de nascimento:");
    scanf("%d", &mes);

    printf("Informe seu ano de nascimento:");
    scanf("%d", &mes);

    printf("Informe seu peso:");
    scanf("%f", &peso);

    printf("Informe sua peso:");
    scanf("%f", &altura);

    printf("Informe seu tamanho de calçado:");
    scanf("%f", &tamanho);

    printf(" \n -=--=--=--=--=--=--=--=--=- \n");
	printf("Ola Cliente Tudo Bem!\n");
	printf("Voce e do sexo %c e nasceu no dia %i / %i / %i \n",sexo,dia,mes,ano);
	printf("Seu peso e %.2f Kg sua altura e %.2f e voce calca %i \n",peso,altura,tamanho);
	printf("Obrigado por utilizar nosso Programa \n");
	printf(" \n -=--=--=--=--=--=--=--=--=- \n");

	return(0);




}