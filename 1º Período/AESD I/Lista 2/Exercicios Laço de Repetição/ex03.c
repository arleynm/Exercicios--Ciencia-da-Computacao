/*Faça um programa de entrevista de emprego que pega o sexo,
idade e formação escolar (1 para fundamental, 2 para médio e 3
para superior) e determina o cargo a que a pessoa pode se
candidatar, de acordo com a tabela:
Sexo Idade Escolaridade Cargo
F >25 médio Recepcionista
M >40 fundamental Servente
F ou M <30 Superior Auxiliar de RH
Com qualquer outra opção deve-se imprimir "não há posição
disponível". Ao final de cada entrevista deve-se perguntar se o 
usuário ainda deseja continuar, caso a resposta seja N o
programa deve finalizar.
*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int idade ,formacao;
    char sexo, opcao;

    do
    {

        printf("infome seu sexo digite f para feminino e m para masculino:");
        scanf("%s", &sexo);

        printf("informe sua idade:");
        scanf("%d", &idade);

        printf("informe sua formaçaão sendo [1] para fundamental [2] para medio e [3] para superior");
        scanf("%d", &formacao);

        if(sexo == 'f' || sexo === 'F' && idade >= 25 && formacao == 2)
        {
            printf("\nVaga : Recepcionista");
        }
        else if (sexo == 'M' || sexo = 'm' && idade >= 40 && formacao ==1)
        {
            printf("\nVaga : Servente");
        }
        else if (sexo == 'M' || sexo = 'm' sexo == 'f' || sexo === 'F' && idade <= 30 && formacao == 3)
        {
            printf("\nVaga : Auxiliar de RH");
        }
        else 
        {
            printf("não há posição disponível");
        }
        printf(" \nQuer Continuar digite S para sim e N para nao");
        scanf("%s", &opcao);
        
        if (opcao == 'N' || opcao =='n')
        {
            break;
		}
    }
    while(opcao == s || opcao == S)

}
