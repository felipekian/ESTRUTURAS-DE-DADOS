#include <stdio.h>
#include <stdlib.h>

#include "fila_dinamica.h"


int main(int argc, char** argv)
{
	
	Fila f;
	
	fila_criar(&f);
	
	printf("Fila Vazia? %s\n", fila_vazia(&f)?"SIM":"NAO");
	
	printf("\nInserindo: 1, 2, 3, 4, 5 e 6\n\n");
	
	
	fila_push(&f, 1);
	fila_push(&f, 2);
	fila_push(&f, 3);
	fila_push(&f, 4);
	fila_push(&f, 5);
	fila_push(&f, 6);	
	
	
	printf("Fila Vazia? %s\n", fila_vazia(&f)?"SIM":"NAO");
	
	
	printf("\nLISTAR\n");
	fila_listar(&f);
	
	
	printf("\n________Verificar se dado valor esta na fila (cancelar == -1):________\n\n");
	
	while( 1 ){
		int v;
		printf("\n>>> ");
		scanf("%d", &v);
		
		if( v == -1 ) break;
		
		
		printf("Valor %d esta ? %s\n", v, fila_existeValor(&f, v)?"SIM":"NAO");
				
	}	
	
	
	printf("\n_____________FILA POP_____________\n");
	
	while( !fila_vazia(&f) ){
		
		printf("FRONT ELEMENT: %d\n", fila_getProxValue(&f));
		printf("POP : %d\n\n", fila_getProxValue(&f));
		
		fila_pop(&f);		
		
	}
	
	
	
	printf("Fila Vazia? %s\n", fila_vazia(&f)?"SIM":"NAO");
	
	return 0;
}