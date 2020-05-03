/**
 *  Projeto: Pilha Dinamica em C
 *  Responsável: Felipe Derkian de Sousa Freitas
 *  Data: 03/05/2020 
 */

struct nodo{
    int valor;
    struct nodo *anterior;
};

struct pilha{
    struct nodo *topo;
};

typedef struct nodo Nodo;
typedef struct pilha Pilha;

void pilha_criar(Pilha *p);
int pilha_vazia(Pilha *p);
int pilha_topo(Pilha *p);
void pilha_push(Pilha *p, int valor);
void pilha_pop(Pilha *p);
void pilha_libera(Pilha *p);
