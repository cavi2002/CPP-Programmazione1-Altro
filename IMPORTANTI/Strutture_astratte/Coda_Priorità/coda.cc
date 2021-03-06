#include "coda.h"
#include <iostream>
#include <cstring>

static const int DIM = 20;
using namespace std;

int succ(int indice, const coda & c){
  return (indice+1)%c.dim;
}

void init(coda & c){
  c.primo = 0;
  c.ultimo = 0;
  c.dim = DIM+1;
  c.lista_messaggi = new messaggio[c.dim];
}

void deinit(coda & c){
  delete[] c.lista_messaggi;
}

static void sort_by_priority(coda & c){
  for(int i=c.primo; i<c.ultimo; i = succ(i,c)){
    for(int j=i; j<c.ultimo; j = succ(j,c)){
      if(c.lista_messaggi[j].priorita>=c.lista_messaggi[i].priorita){
	//
	messaggio elemento;
	strcpy(elemento.testo, c.lista_messaggi[i].testo);
        elemento.priorita = c.lista_messaggi[i].priorita;
	//
	strcpy(c.lista_messaggi[i].testo, c.lista_messaggi[j].testo);
	c.lista_messaggi[i].priorita = c.lista_messaggi[j].priorita;
	//
	strcpy(c.lista_messaggi[j].testo, elemento.testo);
	c.lista_messaggi[j].priorita = elemento.priorita;
      }
    }
  }
}

void enqueue(coda & c, messaggio elemento){
  if(succ(c.ultimo, c)==c.primo){
    cout << "PILA PIENA!" << endl;
  }else{
    c.lista_messaggi[c.ultimo] = elemento;
    c.ultimo = succ(c.ultimo, c);
  }
  sort_by_priority(c);
}

void dequeue(coda & c){
  if(c.primo==c.ultimo){
    cout << "CODA VUOTA!" << endl;
  }else{
    c.primo = succ(c.primo, c);
  }
}

messaggio first(coda & c){
  messaggio ritorno;/*
  if(c.primo == c.ultimo){
    cout << "CODA VUOTA!" << endl;
  }else{
    ritorno = c.lista_persone[c.primo];
  }*/
  return ritorno;
}

void print(const coda & c){
  cout << "CODA CON PRIORITA': " << endl;
  for(int i = c.primo; i!=c.ultimo; i=succ(i,c)){
    messaggio ritorno = c.lista_messaggi[i];
    cout << i << " " << ritorno.testo << " " << ritorno.priorita << endl;
  }
}
