#include <stdio.h>
#include <stdlib.h>

struct node {
    double val;
    struct node* next;
};

// Tipo lista
typedef struct node* list;
// Tipo nodo
typedef struct node* node;

// Inserimento in testa (funzione)
list inserimento_testa(list old_list, double val);
// Stampa lista (procedura)
void stampa_lista(list ll);
// Cancellazione testa (funzione)
list cancella_testa(list old_list);

int main(int argc, char** argv)
{
    list ll = NULL;

    ll = inserimento_testa(ll, 2.5);
    ll = inserimento_testa(ll, 1200.44);
    ll = cancella_testa(ll);

    stampa_lista(ll);

    return 0;
}

// Inserimento in testa (funzione)
list inserimento_testa(list old_list, double val)
{
    list new_list = malloc(sizeof(struct node));
    new_list->val = val;
    new_list->next = old_list;
    return new_list;
}

// Stampa lista (procedura)
void stampa_lista(list ll)
{
    while (ll != NULL) {
        printf("%lf ", ll->val);
        ll = ll->next;
    }
    printf("\n");
}

// Cancellazione testa (funzione)
list cancella_testa(list old_list)
{
    list to_delete = old_list;
    old_list = old_list->next;
    free(to_delete);
    return old_list;
}