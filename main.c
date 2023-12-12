#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dia08.h"


int main(int argc, char** argv){

Lista minhaLista;
int valor, op;
criarLista(&minhaLista);
while( 1 ){

printf( "1 - Inserir elemento no inicio\n" );
printf( "2 - Inserir elemento em ordem (so se a lista estiver ordenada)\n" );
printf( "3 - Remover elemento no inicio\n" );
printf( "4 - Mostrar lista\n" );
printf( "5 - Remover em especifico\n");
printf( "6 - Sair\n" );
printf( "Opcao? " );
scanf( "%d", &op );
    switch( op ){

        case 1: // inserir elemento no inicio
        printf( "Valor? " );
        scanf( "%d", &valor );
        inserirInicio(&minhaLista, valor);
        break;
        
        case 2: // inserir elemento ordenado
        printf( "Valor? " );
        scanf( "%d", &valor );
       inserirOrdenado(&minhaLista, valor);
        break;
        case 3: // remover o primeiro
        remove_inicio(&minhaLista);
        //removerInicio(&minhaLista);
        break;
        case 4: // mostrar lista
        
        if (estaVazia(&minhaLista)) {
        printf("Lista vazia");
        
        }
        else {
        
        mostrarLista(&minhaLista);
        
        }
        break;
        
        case 5: 
          printf( "Valor? " );
          scanf( "%d", &valor );
          retira_especifico(&minhaLista,valor);
        break;
        
        case 6: // abandonar o programa
        
        exit(0);

}
}
}
