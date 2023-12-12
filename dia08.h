#ifndef DIA08_H
#define DIA08_H

#ifdef __cplusplus
extern "C" {
#endif




#ifdef __cplusplus
}
#endif

typedef struct celula Celula;

struct celula {

    int numero;
    Celula *proximo;
    Celula *anterior;

};

typedef struct lista{

    int quantidadeElementos;
    Celula *primeiro;
    Celula *ultimo;

}Lista;

void criarLista (Lista *lista);
int estaVazia(Lista *lista);
void mostrarLista (Lista *lista);
void inserirInicio (Lista *lista, int valor);
void inserirOrdenado(Lista *lista, int valor);
void remove_inicio(Lista *lista);
void retira_especifico(Lista *lista, int valor);
#endif /* DIA08_H */

