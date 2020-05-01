#include <stdio.h>
#include <stdlib.h>

#include "lista.h"



void criar(struct Lista *l){
    l->cabeca = NULL;
}

void inserir(struct Lista *l, int valor){
    struct Nodo *novo = (struct Nodo*) malloc(sizeof(struct Nodo));

    if( novo == NULL ){
        printf("Falha ao alocar memoria\n");
        return;
    }

    // add as informacoes no novo nodo
    novo->elemento = valor;
    novo->proximo = NULL;

    if( l->cabeca ==NULL )
        l->cabeca = novo;
    else{
        struct Nodo *aux = l->cabeca;

        while( aux->proximo != NULL ){
            aux = aux->proximo;
        }
        aux->proximo = novo;
    }
}


int retirar(struct Lista *l)
{
    if( isEmpty(*l) ){
        printf("lista esta vazia\n");
        return -1;
    }

    struct Nodo* aux = l->cabeca;
    int valor = aux->elemento;
    l->cabeca = aux->proximo;
    free(aux);
    aux = NULL;
    return valor;
}

void listar(struct Lista *l)
{
    if(isEmpty(*l)){
        printf("lista vazia\n");
        return;
    }

    struct Nodo *aux = l->cabeca;

    while( 1 ){
        int valor = aux->elemento;
        aux = aux->proximo;
        printf("%d ", valor);

        if ( aux->proximo == NULL ){
            break;
        }
    }

    int valor = aux->elemento;
    aux = aux->proximo;
    printf("%d ", valor);

    printf("\n");
}

void liberarMemoria(struct Lista *l)
{
    struct Nodo *aux = l->cabeca;
    struct Nodo *el;

    while( aux->proximo != NULL ){
        el = aux;
        aux = aux->proximo;
        free(el);
    }

    free(aux);
    l->cabeca = NULL;
}

int isEmpty(struct Lista l)
{
    return (l.cabeca == NULL);
}
