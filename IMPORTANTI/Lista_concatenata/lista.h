#include <iostream>
using namespace std;

//lista concatenata di interi
struct nodo{
  int informazione;
  nodo * next;
};

//lunghezza con conclusione NULL
int lunghezza(nodo * s);
int lunghezza_circolare(nodo * s, nodo * x);
void inserimento_testa(nodo *&x, int v);
void inserimento_coda(nodo *&x, int v);
void inserimento_ordinato(nodo *&x, int v);
void rimuovi(nodo *&x, int v);
nodo * inverti(nodo * x);
bool presente(nodo * x, int n);
void copia_lista(nodo * x, nodo *& t);
nodo * concatena_liste(nodo *x, nodo *t);
void dealloca_lista(nodo *& x);
void stampa_lista(nodo * x);
