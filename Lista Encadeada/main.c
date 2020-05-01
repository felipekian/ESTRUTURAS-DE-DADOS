#include <stdio.h>
#include <stdlib.h>

#include "lista.h"

int main()
{

    struct Lista l;

    criar(&l);

    inserir(&l, 10);
    inserir(&l, 120);
    inserir(&l, 30);
    inserir(&l, 35);
    inserir(&l, 33);
    inserir(&l, 40);

    listar(&l);

    liberarMemoria(&l);

    printf("Lista vazia: %d\n", isEmpty(l));

    return 0;
}
