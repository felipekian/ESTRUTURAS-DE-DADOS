/**
 *  Projeto: Lista Encadeada Dinamicamente Alocado
 *  Autor: Felipe Derkian de Sousa Freitas
 *  Data: 03/05/2020
 */

#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(int argc, char const *argv[])
{
    
    Lista l;

    lista_criar(&l);

    printf("\nLista Vazia?  %s\n\n", lista_vazia(&l)?"SIM":"NAO");

    printf("Insira valores (-1 para cancelar)\n");

    while(1){
        int v, op;
        printf("\n\n1 - push_front\n2 - push_back\n3 - push_In_Order\n>> ");
        scanf("%d", &op);
        
        if(op == -1) break;        

        if( op == 1 ) {
	    	printf("Valor >> ");
            scanf("%d", &v);
            lista_push_front(&l, v);
        } else if( op == 2 ){
		    printf("Valor >> ");
        	scanf("%d", &v);
            lista_push_back(&l, v);
        } else if(op == 3){
            printf("Valor >> ");
        	scanf("%d", &v);
            lista_push_order(&l, v);
        } else {
            printf("Opcao invalida\n");
        }
    }


    printf("\nLista Vazia?  %s\n\n", lista_vazia(&l)?"SIM":"NAO");

    lista_listagem(&l);

    printf("\nVeja se valor existe na lista: (-1 para cancelar)\n");
    while (1)
    {
        int v;
        printf(">> ");
        scanf("%d", &v);

        if( v == -1 ) break;

        printf("Valor %d esta na lista? %s\n", v, lista_verifica(&l, v)?"SIM":"NAO");
    }
    

    printf("\n\nLiberando Lista: \n");
    lista_liberar(&l);

    printf("\n\nLista Vazia?  %s\n\n", lista_vazia(&l)?"SIM":"NAO");
	
    system("pause");
    return 0;
}
