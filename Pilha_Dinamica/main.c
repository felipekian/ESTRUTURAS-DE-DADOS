#include <stdio.h>
#include <stdlib.h>

#include "Pilha_Dinamica.h"

int main()
{

    pilha *p;

    pilha_criar(&p);

    printf("Pilha vazia? %d\n", pilha_isEmpty(&p));

    printf("----------------------\n");

    pilha_inserir(&p, 1);
    pilha_inserir(&p, 2);
    pilha_inserir(&p, 3);
    pilha_inserir(&p, 4);
    pilha_inserir(&p, 5);
    pilha_inserir(&p, 6);
    pilha_inserir(&p, 7);

    printf("\nPilha vazia? %d\n", pilha_isEmpty(&p));

    printf("----------------------\n");

    while( !pilha_isEmpty(&p) ){
        printf("\nPilha TOPO : %d\n", pilha_topo(&p));
        pilha_desempilhar(&p);
    }

    printf("----------------------\n");

    printf("\nPilha vazia? %d\n", pilha_isEmpty(&p));

    pilha_liberar_pilha(&p);

    return 0;
}
