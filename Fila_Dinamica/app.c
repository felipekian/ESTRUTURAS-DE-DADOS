/**
 *  Projeto: Fila Dinamicamente Alocada
 *  Autor: Felipe Derkian
 *  E-mail: felipekian@yahoo.com.br
 *  Data: 05/05/2020
 */

#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(int argc, char const *argv[])
{

    Fila f;

    fila_criar(&f);

    printf("Fila Dinamica em C\n\n");

    printf("Fila vazia?  %s\n\n", fila_vazia(&f) ? "SIM" : "NAO");

    printf("Inserindo os valores: 1, 2, 3, 4, 5 e 6\n\n");

    fila_push(&f, 1);
    fila_push(&f, 2);
    fila_push(&f, 3);
    fila_push(&f, 4);
    fila_push(&f, 5);
    fila_push(&f, 6);

    printf("Verificar se valor esta na fila:\n");
    while (1)
    {
        int v;
        printf(">> ");
        scanf("%d", &v);
        
        if( v == -1 ) break;

        printf("Valor %d esta na lista? %s\n", v, fila_existeValor(&f, v)? "SIM" : "NAO");
    }


    printf("\n\nDenfileirando:\n");

    while( !fila_vazia(&f) ){
        printf("Front: %d\n", fila_getProxValue(&f));
        printf("Removido valor: %d\n\n", fila_getProxValue(&f));
        fila_pop(&f);
    }

    fila_limpar(&f);

    printf("Fila vazia?  %s\n\n", fila_vazia(&f) ? "SIM" : "NAO");

    return 0;
}
