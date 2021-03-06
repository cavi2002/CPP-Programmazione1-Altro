#include "albero.h"
#include <iostream>
using namespace std;

static albero left(const albero & t){
  albero ritorno;
  ritorno.i = 2*t.i+1;
  ritorno.v = t.v;
  return ritorno;
}

static albero right(const albero & t){
  albero ritorno;
  ritorno.i = 2*t.i+2;
  ritorno.v = t.v;
  return ritorno;
}

void init(albero & t){
  t.i = 0;
  t.v = new int[DIM];
  for(int i = 0; i < DIM; i++){
    t.v[i] = -1;
  }
}

void deinit(albero & t){
  delete[] t.v;
}

void insert(albero & t, int value){
  albero t1;
  if(!(t.i>=DIM)){
    if(t.v[t.i] == -1){
      t.v[t.i] = value;
    }else if(value > t.v[t.i]){
      t1 = right(t);
      insert(t1, value);
    }else{
      t1 = left(t);
      insert(t1, value);
    }
  }else{
    cout << "ALBERO PIENO" << endl;
  }
}

void visit(const albero t){
  if(!(t.v[t.i] == -1)){
    visit(left(t));
    cout << t.v[t.i] << endl;
    visit(right(t));
  }
}


albero search(const albero & t, int elemento){
  albero ritorno;
  if(t.v[t.i]==-1){
    ritorno.i = -1;
  }else if(t.v[t.i]==elemento){
    ritorno = t;
  }else if(elemento>t.v[t.i]){
    ritorno = search(right(t), elemento);
  }else{
    ritorno = search(left(t), elemento);
  }

  return ritorno;
}
