#include <stdio.h>
#include <stdlib.h>
#include "Pilha_Dinamica.h"


void pilha_criar(struct Pilha *p)
{
    p->topo = NULL;
}

void pilha_inserir(struct Pilha *p, int valor)
{
    struct Nodo *novo = (struct Nodo*) malloc(sizeof(struct Nodo));

    if( novo == NULL ){
        printf("Falha ao criar nodo.\n");
        return;
    }

    if( p->topo == NULL ){
        novo->valor = valor;
        novo->prox = NULL;
        p->topo = novo;
    } else {
        novo->prox = p->topo;
        novo->valor = valor;
        p->topo = novo;
    }
}

int pilha_topo(struct Pilha *p)
{
    return ( p->topo->valor );
}

int pilha_isEmpty(struct Pilha *p)
{
    return (p->topo == NULL);
}

void pilha_desempilhar(struct Pilha *p)
{
    struct Nodo *aux = p->topo;
    p->topo = aux->prox;
    free(aux);
}


void pilha_liberar_pilha(struct Pilha *p){
    struct Nodo *aux = p->topo;

    while( aux->prox != NULL ){
        p->topo = aux->prox;
        free(aux);
        aux = p->topo;
    }
    free(aux);

    p->topo = NULL;
}
