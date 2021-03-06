#include <iostream>
#include "coda.h"
using namespace std;

const int DIM = 20;

int main(){

  coda c;
  int risposta, n;
  init(c);
  do{
    cout << "1) Inserisci elemento coda" << endl;
    cout << "2) Rimuovi elemento coda" << endl;
    cout << "3) Restituisci coda" << endl;
    cout << "4) Restituisci primo elemento in coda" << endl;
    cout << "0) Concludi programma" << endl;
    cin >> risposta;
    switch(risposta){
    case 1:
      cout << "Inserisci numero da inserire: ";
      cin >> n;
      enqueue(c, n);
      break;
    case 2:
      dequeue(c);
      break;
    case 3:
      print(c);
      break;
    case 4:
      cout << "Primo elemento in coda: " << first(c) << endl;
      break;
    case 0:
      deinit(c);
      cout << "Fine" << endl;
      break;
    default:
      cout << "Scelta sbagliata" << endl;
    }
  }while(risposta!=0);
  
  return 0;
}
