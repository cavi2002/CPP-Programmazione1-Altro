#include <iostream>
#include "albero.h"

using namespace std;

int main(){

  albero albero_binario;
  int value;

  init(albero_binario);

  int risposta;
  do{
    cout << "1 - INSERISCI ELEMENTO NELL'ALBERO BINARIO" << endl;
    cout << "2 - STAMPA ALBERO" << endl;
    cout << "3 - RICERCA BINARIA" << endl;
    cout << "0 - FINE" << endl;
    cin >> risposta;
    switch(risposta){
    case 1:
      cout << "Inserisci elemento: ";
      cin >> value;
      insert(albero_binario, value);
      break;
    case 2:
      visit(albero_binario);
      break;
    case 3:
      cout << "Inserisci valore da cercare: ";
      cin >> value;
      if(search(albero_binario, value).i==-1){
	cout << "Elemento non trovato" << endl;
      }else{
	cout << "Elemento trovato" << endl;
      }
      break;
    case 0:
      deinit(albero_binario);
      break;
    default:
      cout << "Scelta non capita" << endl;
    }
  }while(risposta!=0);
  
  return 0;
}
