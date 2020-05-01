#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

struct Nodo{
    int elemento;
    struct Nodo *proximo;
};


struct Lista{
    struct Nodo* cabeca;
};

void criar(struct Lista *l);
void inserir(struct Lista *l, int valor);
int isEmpty(struct Lista l);
int retirar(struct Lista *l);
void listar(struct Lista *l);
void liberarMemoria(struct Lista *l);

#endif // LISTA_H_INCLUDED
