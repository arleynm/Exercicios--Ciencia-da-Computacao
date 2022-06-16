#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool excluir (int x)
{
    int i = hash(x), resp = NULO;
    if (tabela[i] == x)
    { 
        resp = i;
    } 
    else if (tabela[i] != NULO) 
    {
        for (int i = 0; i < tamReserva; i++)
        {
            if (tabela[tamTabela + i] == x)
            {
                resp = false;
            } 
        } 
    } 
    return resp;
}