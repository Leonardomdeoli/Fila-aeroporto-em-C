#include<stdlib.h>
#include<string.h>
#include "Aviao.h"

struct aviao {
    int id;
    char nome[30];
    char origem[30];
    char destino[30];
    int passagerio;
    int capacidade;
    char modelo[30];
    Aviao *prox;
};

Aviao* cadastrarAviao( int id, char *Novonome, char *Novaorigem, char *Novodestino,int passagerio,int capacidade,char *Novomodelo, Aviao *a ) {
    Aviao *novo = ( Aviao* )malloc( sizeof( Aviao ) );

    novo->id = id;
    strcpy(novo->nome,Novonome);
    strcpy(novo->origem,Novaorigem);
    strcpy(novo->destino,Novodestino);
    novo->passagerio = passagerio;
    novo->capacidade = capacidade;
    strcpy(novo->modelo,Novomodelo);
    novo->prox = a;

    return novo;
}

int getId( Aviao *a ) {
    return a->id;
}

char *getNome( Aviao *a ) {
     return a->nome;
}

char *getOrigem( Aviao *a ) {
    return a->origem;
}

char *getDestino( Aviao *a ) {
    return a->destino;
}
int getPassageiro(Aviao *a){
    return a->passagerio;
}
int getCapacidade(Aviao *a){
    return a->capacidade;
}
char *getModelo(Aviao *a){
    return a->modelo;
}
Aviao* getProxAviao( Aviao *a ) {
    return a->prox;
}
void setProxAviao( Aviao *a ,Aviao *v ){
     a->prox = v;
}

void apagaAviao(Aviao *a){
    free(a);
}
