/*Faça um programa para a leitura de duas notas parciais de um aluno.
O programa deve calcular a média alcançada por aluno e apresentar:
- A mensagem "Aprovado", se a média alcançada for maior ou igual a sete e menor que 10;
- A mensagem "Reprovado", se a média for menor do que sete;
- A mensagem "Aprovado com Distinção", se a média for igual a dez */

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int nota1, nota2, media;

    printf("Informe a 1º nota:");
    scanf("%d", &nota1);

    printf("Informe a 2º nota:");
    scanf("%d", &nota2);

    media= nota1 + nota2/2;

    if(media==10)
    {
        printf("Aprovado com Distinção");
    }
    if (media<10 && media>=7)
    {
        printf("Aprovado");
    }
    if  
    {
        printf("Reprovado");
    }

}