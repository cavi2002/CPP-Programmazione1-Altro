#include "stack.h"
#include <cstring>
#include <iostream>
static const int DIM = 20;
using namespace std;

void init(pila & p){
  p.indice = 0;
  p.frasi = new (nothrow) messaggio[DIM];
}


void push(pila & p, char * stringa){

  if(p.indice<DIM){
    strcpy(p.frasi[p.indice].testo, stringa);
    p.indice += 1;
  }else{
    cout << "PILA PIENA" << endl;
  }
  
}

char * pop(pila & p){
  p.indice = p.indice-1;
  return p.frasi[p.indice].testo;
}

void deinit(pila & p){
  delete[] p.frasi;
}
