#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dia08.h"


void criarLista(Lista *lista){

lista-> primeiro = NULL;
lista-> ultimo = NULL;
lista-> quantidadeElementos = 0;

}

int estaVazia(Lista *lista){

return (lista->primeiro== NULL);

}

void mostrarLista(Lista *lista){
Celula *celula;

for (celula = lista -> primeiro; celula != NULL; celula = celula->proximo) {

printf("%d\t", celula->numero);

}
printf("\n");

}


void inserirInicio(Lista *lista, int valor){

Celula *celula;
celula = (Celula*) malloc (sizeof (Celula));
celula -> numero = valor;
celula -> proximo = lista -> primeiro;
celula -> anterior = NULL;
lista -> primeiro = celula;
if ( lista -> primeiro -> proximo != NULL){
lista -> primeiro -> proximo ->anterior = lista -> primeiro;
}

}

void inserirOrdenado(Lista *lista, int valor){
    
    int cont=0;
    Celula *celula;
    celula = (Celula*) malloc (sizeof (Celula));
    Celula *temp;
    temp = (Celula*) malloc (sizeof (Celula));
    temp = lista->primeiro ;
    celula -> numero = valor;
    
while(celula->numero >lista->primeiro->numero){
        lista->primeiro = lista->primeiro->proximo;
        cont++;
}

if(cont==0){
    celula->anterior = NULL;
    celula->proximo = lista->primeiro;
    lista->primeiro->anterior = celula;
   
}

else{
    printf("%d\n",lista->primeiro->numero);
    
    celula->proximo = lista->primeiro;
    printf("%d\n",celula->proximo->numero);
    celula->anterior = lista->primeiro->anterior;
    printf("%d\n",celula->anterior->numero);
    lista->primeiro->anterior= celula;
    printf("%d\n",lista->primeiro->anterior->numero);
    lista->primeiro->anterior->proximo = celula;
    printf("%d\n",lista->primeiro->anterior->proximo->numero);
    
}
lista->primeiro = temp;
}

void remove_inicio(Lista *lista){
    Celula *celula;
    celula = (Celula*) malloc (sizeof (Celula));
    celula = lista->primeiro;
    lista->primeiro = lista->primeiro->proximo;
    
    if(lista->primeiro->proximo!=NULL){
        lista->primeiro->proximo->anterior =NULL;
    }
    free(celula);
}

void retira_especifico(Lista *lista, int valor){
    Celula *celula;
    celula = (Celula*) malloc (sizeof (Celula));
    Celula *temp;
    temp = (Celula*) malloc (sizeof (Celula));
    temp = lista->primeiro;
    while(valor != lista->primeiro->proximo->numero){
       
        lista->primeiro = lista->primeiro->proximo;
        
    }
    lista->primeiro = lista->primeiro->proximo;
    
    if(lista->primeiro->proximo==NULL){
       
        celula = lista->primeiro;
        lista->primeiro->anterior->proximo= NULL;
        lista->primeiro = temp;
        free(celula);
    }
    else{
        celula = lista->primeiro;
        lista->primeiro->proximo->anterior = celula->anterior;
        lista->primeiro->anterior->proximo = celula->proximo;
        lista->primeiro = temp;
        free(celula);
    }
    
}
