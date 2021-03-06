#include <iostream>
using namespace std;
#include "coda.h"

static const int DIM = 20;

int succ(int indice, const coda & c){
  return (indice+1)%c.dim;
}

void init(coda & c){
  c.primo = 0;
  c.ultimo = 0;
  c.dim = DIM+1;
  c.v = new int[c.dim];
}

void deinit(coda & c){
  delete[] c.v;
}

void enqueue(coda & c, int elemento){
  if(succ(c.ultimo, c)==c.primo){
    cout << "CODA PIENA!" << endl;
  }else{
    c.v[c.ultimo] = elemento;
    c.ultimo = succ(c.ultimo, c);
  }
}

void dequeue(coda & c){
  if(c.primo==c.ultimo){
    cout << "CODA VUOTA" << endl;
  }else{
    c.primo = succ(c.primo, c);
  }
}

int first(coda & c){
  int ritorno = -1;
  if(c.primo==c.ultimo){
    cout << "CODA VUOTA" << endl;
  }else{
    ritorno = c.v[c.primo];
  }
  return ritorno;
}

void print(const coda & c){
  for(int i = c.primo; i!=c.ultimo; i=succ(i,c)){
    cout << c.v[i] << " ";
  }
  cout << endl;
}

