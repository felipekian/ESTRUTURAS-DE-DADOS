/**
 *  Projeto: Pilha Dinamica em C
 *  Responsável: Felipe Derkian de Sousa Freitas
 *  Data: 03/05/2020 
 */

#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(int argc, char const *argv[])
{
    
    Pilha p;

    pilha_criar(&p);

    printf("\nPILHA VAZIA : %s\n\n", pilha_vazia(&p)?"SIM":"NAO");

    printf("Inserir valores: (-1 cancela)\n");

    while(1){
        int v;

        printf(">>> ");
        scanf("%d", &v);

        if( v == -1) break;

        pilha_push(&p, v);
    }

    printf("\n\nTopo da pilha : %d\n\n", pilha_topo(&p));

    printf("\nPILHA VAZIA : %s\n\n", pilha_vazia(&p)?"SIM":"NAO");

    printf("\n\nLiberando pilha: \n");
    pilha_libera(&p);

    printf("\nPILHA VAZIA : %s\n\n", pilha_vazia(&p)?"SIM":"NAO");

    system("pause");

    return 0;
}
