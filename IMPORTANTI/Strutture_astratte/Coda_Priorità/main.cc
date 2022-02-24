#include <iostream>
#include "coda.h"
#include <cstring>
using namespace std;

const int DIM = 20;

int main(){

  char testo[10000];
  int priorita;
  messaggio elemento;
  coda coda_a_priorita;
  
  init(coda_a_priorita);
  
  int risposta;
  do{
    cout << "1 - INSERISCI ELEMENTO " << endl;
    cout << "2 - RIMUOVI ELEMENTO " << endl;
    cout << "3 - STAMPA SITUAZIONE " << endl;
    cout << "0 - TERMINA " << endl;
    cin >> risposta;
    switch(risposta){
    case 1:
      cout << "TESTO: ";
      cin >> testo;
      cout << "PRIORITA: ";
      cin >> priorita;
      strcpy(elemento.testo, testo);
      elemento.priorita = priorita;
      enqueue(coda_a_priorita, elemento);
      break;
    case 2:
      dequeue(coda_a_priorita);
      break;
    case 3:
      print(coda_a_priorita);
      break;
    case 0:
      cout << "TERMINE" << endl;
      break;
    default:
      cout << "SCELTA NON COMPRESA " << endl;
      break;
    }
  }while(risposta!=0);

  
  return 0;
}
