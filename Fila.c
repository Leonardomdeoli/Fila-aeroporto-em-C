#include<stdio.h>
#include "Fila.h"
#include <locale.h>

struct fila {
    Aviao* inicio;
    Aviao* fim;
};

Fila* cria() {
    Fila* f = ( Fila* )malloc( sizeof( Fila ) );
    setInicio( f, NULL );
    setFim( f, NULL );
    return f;
}

void adicionar( Fila* f, int id, char *Novonome, char *Novaorigem, char *Novodestino,int passagerio,int capacidade,char *Novomodelo) {

    Aviao* n = cadastrarAviao(id,Novonome,Novaorigem,Novodestino,passagerio,capacidade,Novomodelo,NULL);

    if ( vazia( f ) ) {
        setInicio( f, n );
    } else {
        setProxAviao( getFim( f ), n );
    }

    setFim( f, n );
    printf("\n\n\n            Avião %s adicionado com sucesso!!!",getNome(n));
}

Aviao* getInicio( Fila* f ) {
    return f->inicio;
}

Aviao* getFim( Fila* f ) {
    return f->fim;
}

void setInicio( Fila* f, Aviao* n ) {
    f->inicio = n;
}

void setFim( Fila* f, Aviao* n ) {
    f->fim = n;
}

bool vazia( Fila* f ) {
    return getInicio( f ) == NULL;
}

void decolagem( Fila* f ) {
    if ( !vazia( f ) ) {
        Aviao* n = getInicio( f );
        setInicio( f, getProxAviao( n ) );

        if ( getProxAviao( n ) == NULL ) {
            setFim( f, NULL );
        }
        printf("\n\n            O avião %s com destino á %s acabou de decolar!!!",getNome(n),getDestino(n));
        apagaAviao( n );
    }else{
        printf("\n\n                    Não á aviões no aeroporto");
    }
}

void ListaEspera( Fila* f ) {
    if( !vazia( f ) ){
       Aviao* n;
    for ( n = getInicio( f ); n != NULL; n = getProxAviao( n ) ) {
        printf( "\n    Aviao: %d\n    Nome: %s\n",getId( n ) ,getNome( n ));
    }
    }
    else{
        printf("\n                    Não á aviões no aeroporto");
    }

}


int EsperandoDecolar( Fila* f ) {

    int cont = 0;
    Aviao* n;

    for ( n = getInicio( f ); n != NULL; n = getProxAviao( n ) ) {
        cont++;
    }

    return cont;
}


void mostrarAviao( Fila* f ) {
    if( !vazia( f ) ){
    Aviao* n;

    n = getInicio( f );
    printf( "\n    Avião: %d\n    Modelo: %s\n    Nome: %s\n    Origem: %s\n    Destino: %s\n    Capacidade: %d\n    Passageiros: %d\n",
           getId( n ) ,getModelo( n ),getNome( n ),getDestino( n ),
           getOrigem( n ),getCapacidade( n ),getPassageiro( n ) );

    }
    else{
        printf("\n                    Não á aviões no aeroporto");
    }
}



