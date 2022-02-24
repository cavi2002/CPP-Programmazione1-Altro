#include "albero.h"
#include <iostream>
#include <cstring>
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

albero search(albero & t, char value[]){
  albero ritorno;
  if(t==NULL){
    ritorno = NULL;
  }else if(strcmp(value, t->value)==0){
    ritorno = t;
  }else if(strcmp(value, t->value)<0){
    ritorno = search(t->left, value);
  }else{
    ritorno = search(t->right, value);
  }
  return ritorno;
}

void visit(const albero & t){
  if(t != NULL){
    visit(t->left);
    cout << t->value << " " << endl;
    visit(t->right);
  }
}


void insert(albero & t, char value[]){
  if(t==NULL){
    t = new (nothrow) node;
    strcpy(t->value, value);
    t->left = NULL;
    t->right = NULL;
  }else if(strcmp(value, t->value)<0){
    insert(t->left, value);
  }else{
    insert(t->right, value);
  }
}


