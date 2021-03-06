#include <iostream>
#include "coda.h"

using namespace std;

static const int DIM = 20;

int succ(int indice, const coda & c){
  return (indice+1)%c.dim;
}

void init(coda & c){
  c.primo = 0;
  c.ultimo = 0;
  c.dim = DIM+1;
  c.lista_persone = new persona[c.dim];
}

void deinit(coda & c){
  delete[] c.lista_persone;
}

void enqueue(coda & c, persona elemento){
  if(succ(c.ultimo, c)==c.primo){
    cout << "CODA PIENA!" << endl;
  }else{
    c.lista_persone[c.ultimo] = elemento;
    c.ultimo = succ(c.ultimo, c);
  }
}

void dequeue(coda & c){
  if(c.primo==c.ultimo){
    cout << "CODA VUOTA!" << endl;
  }else{
    c.primo = succ(c.primo, c);
  }
}

persona first(coda & c){
  persona ritorno;
  if(c.primo == c.ultimo){
    cout << "CODA VUOTA!" << endl;
  }else{
    ritorno = c.lista_persone[c.primo];
  }
  return ritorno;
}

void print(const coda & c){
  cout << "FILA POSTE: " << endl;
  for(int i = c.primo; i!=c.ultimo; i=succ(i,c)){
    persona ritorno = c.lista_persone[i];
    cout << i << " " << ritorno.nome << " " << ritorno.cognome << endl;
  }
}
