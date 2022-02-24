#include <iostream>
#include "lista.h"
using namespace std;


int main(int argc, char * argv[]){
  
  nodo * x = NULL;
  int n;

  cout << "INSERIMENTO PRIMA LISTA: " << endl;
  
  for(int i=0; i<5; i++){
    cout << "Inserire numero: ";
    cin >> n;
    inserimento_ordinato(x, n);
  }

  nodo * t = NULL;

  copia_lista(x,t);

  nodo * s = concatena_liste(x,t);
  stampa_lista(s);
  dealloca_lista(x);
  
  return 0;

}
