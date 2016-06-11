typedef struct aviao Aviao;

Aviao* cadastrarAviao( int id, char *nome, char *origem, char *destino,int passagerio,int capacidade,char *Novomodelo, Aviao *a );

void liberarAviao( Aviao *a );

Aviao* getProxAviao( Aviao *a );

int getId( Aviao *a );

char *getNome( Aviao *a );

char *getOrigem( Aviao *a );

char *getDestino( Aviao *a );

int getPassageiro(Aviao *a);

int getCapacidade(Aviao *a);

char *getModelo(Aviao *a);

void setId( Aviao *a, int id );

Aviao* getProxAviao( Aviao *a );

void setProxAviao( Aviao *a ,Aviao *v );

void apagaAviao(Aviao *a);
