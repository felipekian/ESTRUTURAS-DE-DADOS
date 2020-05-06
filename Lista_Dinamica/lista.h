
typedef struct node{
    int valor;
    struct node *proximo;
} Node;


typedef struct lista{
    struct node *cabeca;
    struct node *calda;
} Lista;


void lista_criar(Lista *l);
int lista_vazia(Lista *l);
void lista_listagem(Lista *l);
void lista_push_front(Lista *l, int valor);
void lista_push_order(Lista *l, int valor);
void lista_push_back(Lista *l, int valor);
int lista_verifica(Lista *l, int valor);
void lista_liberar(Lista *l);
