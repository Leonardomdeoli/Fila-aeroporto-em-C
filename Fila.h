#include<stdbool.h>
#include<stdio.h>
#include "Aviao.c"

typedef struct fila Fila;

Fila* cria();

Aviao* getInicio( Fila* f );

Aviao* getFim( Fila* f );

void setInicio( Fila* f, Aviao* n );

void setFim( Fila* f, Aviao* n);

bool vazia( Fila* f );

void mostrarAviao( Fila* f );

void adicionar( Fila* f, int id, char *Novonome, char *Novaorigem, char *Novodestino,int passagerio,int capacidade,char *Novomodelo);

void decolagem( Fila* f );
