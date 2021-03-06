#include "lista.h"
#include <iostream>

using namespace std;


//lunghezza con conclusione NULL
int lunghezza(nodo * s){
  int i = 0;
  for(; s != NULL; s = s->next){
    i++;
  }
  return i;
}

//lunghezza di lista circolare
/*
int lunghezza_circolare(nodo * s, nodo * x){
  int i = 0;
  if(s != NULL){
    i = 1;
    for(s = s->next; s != x; s = s->next){
      i++;
    }
  }
  return i;
}*/


void inserimento_testa(nodo *&x, int v){
  nodo * t = new nodo;
  t->informazione = v;
  t->next = x;
  x = t;
  //return t
  //se non passato per rif. si può restituire con una funzione
}

void inserimento_coda(nodo *&x, int v){
  nodo * t = new nodo;
  t->informazione = v;
  t->next = NULL;
  //controllo se la lista non è vuota
  if(x!=NULL){
    nodo * q = x;
    //ciclo fino alla fine della lista
    while(q->next!=NULL){
      q = q->next;
    }
    //setto il valore
    q->next = t;
  }else{
    x = t;
  }
}

void inserimento_ordinato(nodo *&x, int v){
  if((x==NULL)||(x->informazione>=v)){
    inserimento_testa(x, v);
  }else{
    nodo * t = x;
    while((t->next!=NULL)&&(t->next->informazione<=v)){
      t = t->next;
    }
    
    nodo * r = new nodo;
    r->informazione = v;
    r->next = t->next;
    t->next = r;
  }
}

void rimuovi(nodo *&x, int v){
  if(x!=NULL){
    nodo * t = x;
    if(t->informazione==v){
      x = x->next;
      delete t;
    }else{
      while(t->next!=NULL){
	if(t->next->informazione==v){
	  nodo *r = t->next;
	  t->next = t->next->next;
	  delete r;
	  return;
	}
	if(t->next!=NULL){
	  t = t->next;
	}
      }
    }
  }
}

nodo * inverti(nodo * x){
  nodo * t;
  nodo * y = x;
  nodo * r = NULL;
  while(y!=NULL){
    t = y->next;
    y->next = r;
    r = y;
    y = t;
  }
  return r;
}

bool presente(nodo * x, int n){
  bool ritorno = false;
  if(x!=NULL){
    while(x!=NULL){
      if(x->informazione==n){
	ritorno = true;
      }
      x = x->next;
    }
  }
  return ritorno;
}

void copia_lista(nodo * x, nodo *& t){
  if(x!=NULL){
    while(x!=NULL){
      inserimento_ordinato(t, x->informazione);
      x = x->next;
    }
  }
}

nodo * concatena_liste(nodo * x, nodo * t){
  nodo * s = NULL;
  if(x!=NULL&&t!=NULL){
    while(x!=NULL){
      inserimento_ordinato(s, x->informazione);
      x = x->next;
    }
    while(t!=NULL){
      inserimento_ordinato(s, t->informazione);
      t = t->next;
    }
  }
  return s;
}

void dealloca_lista(nodo *& x){
  while(x!=NULL){
    nodo *t = x;
    x = x->next;
    delete t;
  }
}

void stampa_lista(nodo * x){
  cout << "Lista concatenata: ";
  while(x!=NULL){
    cout << x->informazione << " ";
    x = x->next;
  }
  cout << endl;
}

