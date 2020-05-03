/**
 *  Projeto: Lista Encadeada Dinamicamente Alocado
 *  Autor: Felipe Derkian de Sousa Freitas
 *  Data: 03/05/2020
 */

#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void lista_criar(Lista *l)
{
    l->cabeca = l->calda = NULL;
}

int lista_vazia(Lista *l)
{
    return (l->cabeca == NULL);
}

void lista_listagem(Lista *l)
{
    Node *aux = l->cabeca;

    printf("\n\nListando:  ");

    while (1)
    {
        printf("%d ", aux->valor);

        if (aux->proximo == NULL)
            break;

        aux = aux->proximo;
    }
    printf("\n\n");
}

void lista_push_front(Lista *l, int valor)
{
    Node *novo = (Node *)malloc(sizeof(Node));

    if (novo == NULL)
    {
        printf("Falha ao alocar memória\n");
    }

    if (lista_vazia(l))
    {
        novo->proximo = NULL;
        novo->valor = valor;

        l->cabeca = l->calda = novo;
    }
    else
    {
        novo->proximo = l->cabeca;
        novo->valor = valor;

        l->cabeca = novo;
    }
}

void lista_push_back(Lista *l, int valor)
{
    Node *novo = (Node *)malloc(sizeof(Node));

    if (novo == NULL)
    {
        printf("Falha ao alocar memória\n");
    }

    if (lista_vazia(l))
    {
        novo->proximo = NULL;
        novo->valor = valor;

        l->cabeca = l->calda = novo;
    }
    else
    {
        novo->proximo = NULL;
        novo->valor = valor;

        l->calda->proximo = novo;
        l->calda = novo;
    }
}

int lista_verifica(Lista *l, int valor){

    Node *aux = l->cabeca;

    while( 1 ){

        if( aux->valor == valor ) return 1;

        if( aux->proximo == NULL ) break;

        aux = aux->proximo;
    }

}
void lista_liberar(Lista *l){

    Node *aux = NULL;

    while( 1 ){
        aux = l->cabeca;

        if( aux->proximo == NULL ) {
            free(aux);
            break;
        }

        l->cabeca = aux->proximo;
        free(aux);
    }

    l->cabeca = l->calda = NULL;

}