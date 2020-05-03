#ifndef PILHA_DINAMICA_H_INCLUDED
#define PILHA_DINAMICA_H_INCLUDED

struct Nodo{
    int valor;
    struct Nodo *prox;
};


struct Pilha{
    struct Nodo *topo;
};

typedef struct Pilha pilha;


void pilha_criar(struct Pilha *p);

void pilha_inserir(struct Pilha *p, int valor);

int pilha_topo(struct Pilha *p);

int pilha_isEmpty(struct Pilha *p);

void pilha_desempilhar(struct Pilha *p);

void pilha_liberar_pilha(struct Pilha *p);

#endif // PILHA_DINAMICA_H_INCLUDED
