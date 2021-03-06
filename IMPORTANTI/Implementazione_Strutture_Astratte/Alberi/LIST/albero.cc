#include "albero.h"
#include <iostream>
using namespace std;

void init(albero & t){
  t = NULL;
}

void deinit(albero & t){
  if(t!=NULL){
    deinit(t->left);
    deinit(t->right);
    delete t;
  }
}

albero search(albero & t, int value){
  albero ritorno;
  if(t==NULL){
    ritorno = NULL;
  }else if(value==t->value){
    ritorno = t;
  }else if(value<t->value){
    ritorno = search(t->left, value);
  }else{
    ritorno = search(t->right, value);
  }
  return ritorno;
}

void visit(const albero & t){
  if(t != NULL){
    visit(t->left);
    cout << t->value << " " << endl;;
    visit(t->right);
  }
}


void insert(albero & t, int value){
  if(t==NULL){
    t = new (nothrow) node;
    t->value = value;
    t->left = NULL;
    t->right = NULL;
  }else if(value < t->value){
    insert(t->left, value);
  }else{
    insert(t->right, value);
  }
}


