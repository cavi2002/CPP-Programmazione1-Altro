#include <iostream>
#include "pila.h"
using namespace std;

const int DIM = 20;


int main(){

  pila p;
  int risposta, n;
  init(p);
  do{
    cout << "1) Inserisci elemento pila" << endl;
    cout << "2) Rimuovi elemento pila" << endl;
    cout << "3) Restituisci elemento in cima della pila" << endl;
    cout << "0) Concludi programma" << endl;
    cin >> risposta;
    switch(risposta){
    case 1:
      cout << "Inserisci numero da inserire: ";
      cin >> n;
      push(p, n);
      break;
    case 2:
      pop(p);
      break;
    case 3:
      cout << "Elemento in cima: " << top(p) << endl;;
      break;
    case 0:
      deinit(p);
      cout << "Fine" << endl;
      break;
    default:
      cout << "Scelta sbagliata" << endl;
    }
  }while(risposta!=0);
  return 0;
}
