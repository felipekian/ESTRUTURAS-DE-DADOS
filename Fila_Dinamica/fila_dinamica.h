

struct nodo{
	int valor;	
	struct nodo *prox;
};


struct fila{
   struct nodo *cabeca;
   struct nodo *calda;
};

typedef struct nodo Nodo;
typedef struct fila Fila;

void fila_criar(Fila *f);

int fila_vazia(Fila *f);

void fila_push(Fila *f, int valor);

void fila_listar(Fila *f);

int fila_getProxValue(Fila *f); 

void fila_pop(Fila *f);

int fila_existeValor(Fila *f, int valor);







