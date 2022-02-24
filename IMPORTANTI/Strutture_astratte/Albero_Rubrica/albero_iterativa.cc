#include "albero.h"
#include <iostream>
#include <cstring>
using namespace std;

void init(albero & t){
  t = NULL;
}

void deinit(albero & t){
  while(t!=NULL){
    albero appoggio = t;
    while(appoggio->left!=NULL){
      appoggio = appoggio->left;
    }
    while(appoggio->right!=NULL){
      appoggio = appoggio->right;
      while(appoggio->left!=NULL){
	appoggio = appoggio->left;
      }
    }
    delete appoggio;
  }
}

void insert(albero & t, char value[]){
  albero appoggio = t;
  while(appoggio!=NULL){
    if(strcmp(value, t->value)<0){
      appoggio = appoggio->left;
    }else{
      appoggio = appoggio->right;
    }
  }
  appoggio = new (nothrow) node;
  strcpy(appoggio->value, value);
  appoggio->left = NULL;
  appoggio->right = NULL;
}

void visit(const albero & t){
}

albero search(albero & t, char value[]){
  albero ritorno = NULL;
  albero appoggio = t;
  while(appoggio!=NULL){
    if(strcmp(value, appoggio->value)==0){
      ritorno = t;
    }else if(strcmp(value, appoggio->value)<0){
      appoggio = appoggio->left;
    }else{
      appoggio = appoggio->right;
    }
  }
  return ritorno;
}
