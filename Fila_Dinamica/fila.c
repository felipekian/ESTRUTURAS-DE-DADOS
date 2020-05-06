/**
 *  Projeto: Fila Dinamicamente Alocada
 *  Autor: Felipe Derkian
 *  E-mail: felipekian@yahoo.com.br
 *  Data: 05/05/2020
 */

#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

void fila_criar(Fila *f)
{
    f->cabeca = f->calda = NULL;
}

int fila_vazia(Fila *f)
{
    return (f->cabeca == NULL);
}

void fila_push(Fila *f, int valor)
{
    Nodo *novo = (Nodo *)malloc(sizeof(Nodo));

    if (novo == NULL)
    {
        printf("Falha ao alocar memória\n");
        return;
    }

    //atribui os valores ao novo nodo
    novo->prox = NULL;
    novo->valor = valor;

    if (fila_vazia(f))
    {
        f->cabeca = f->calda = novo;
    }
    else
    {
        f->calda->prox = novo;
        f->calda = novo;
    }
}

void fila_listar(Fila *f)
{
    Nodo *aux = f->cabeca;

    printf("\nListar valores: ");

    while (1)
    {
        printf("%d ", aux->valor);

        if (aux->prox == NULL)
            break;

        aux = aux->prox;
    }
    printf("\n\n");
}

int fila_getProxValue(Fila *f)
{
    if (fila_vazia(f))
    {
        printf("\nOpss, fila vazia\n\n");
        return -1;
    }

    return f->cabeca->valor;
    ;
}

void fila_pop(Fila *f)
{
    if (fila_vazia(f))
    {
        printf("\nOpss, fila vazia\n\n");
        return;
    }

    Nodo *aux = f->cabeca;
    f->cabeca = aux->prox;

    free(aux);
}

int fila_existeValor(Fila *f, int valor)
{
    Nodo *aux = f->cabeca;

    while (1)
    {
        if (aux->valor == valor)
            return 1;
        if (aux->prox == NULL)
            break;
        aux = aux->prox;
    }

    return 0;
}

void fila_limpar(Fila *f)
{
    if( fila_vazia(f) ){
        printf("Fila vazia.\n");
        return;
    }

    Nodo *aux, *aux2 = f->cabeca;

    while( 1 ){
        aux2 = aux;
        free(aux2);

        if(aux->prox == NULL) break;

        aux = aux->prox;
    }    
    fila_criar(f);
}