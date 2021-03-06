static const int DIM = 20;
#include <iostream>
using namespace std;
#include "pila.h"
void init(pila & p){
  p.indice = 0;
  p.v = new int[DIM];
}

void push(pila & p, int elemento){
  if(p.indice>=DIM){
    cout << "PILA PIENA" << endl;
  }else{
    p.v[p.indice] = elemento;
    p.indice += 1;
  }
}

void pop(pila & p){
  p.indice -= 1;
}

int top(pila p){
  return p.v[p.indice-1];
}

void deinit(pila & p){
  delete[] p.v;
}
