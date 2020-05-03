/**
 *  Projeto: Pilha Dinamica em C
 *  Responsável: Felipe Derkian de Sousa Freitas
 *  Data: 03/05/2020 
 */

#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

void mensagem_pilha_vazia(){
    printf("Pilha Fazia\n");
}

void pilha_criar(Pilha *p){
    p->topo = NULL;
}

int pilha_vazia(Pilha *p){
    return (p->topo == NULL);    
}

int pilha_topo(Pilha *p){
    if( pilha_vazia(p) ){
        mensagem_pilha_vazia();
        return;
    }

    return p->topo->valor;
}

void pilha_push(Pilha *p, int valor){
    Nodo *novo = (Nodo*) malloc(sizeof(Nodo));

    if(novo == NULL){
        printf("Falha ao alocar memoria\n");
        return;
    }

    novo->anterior = p->topo;
    novo->valor = valor;
    p->topo = novo;
}

void pilha_pop(Pilha *p){
    if( pilha_vazia(p) ){
        mensagem_pilha_vazia();
        return;
    }

    Nodo *aux = p->topo;

    p->topo = aux->anterior;

    free(aux);
    
}

void pilha_libera(Pilha *p){

    Nodo *aux;

    while( 1 ){
        aux = p->topo;
        p->topo = aux->anterior;

        printf("liberou : %d\n", aux->valor);
        
        if( aux->anterior == NULL ) break;

        free(aux);
    }
}
