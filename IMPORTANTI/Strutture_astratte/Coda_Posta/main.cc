#include <iostream>
#include <cstring>
#include "coda.h"
using namespace std;

const int DIM = 20;

int main(){

  persona elemento;
  coda fila_poste;
  int risposta;
  char nome[DIM], cognome[DIM];
  init(fila_poste);
  do{
    cout << " - - -POSTE ITALIANE - - - " << endl;
    cout << "1 - Arriva persona " << endl;
    cout << "2 - Smaltisci persona " << endl;
    cout << "3 - Stampa situazione corrente " << endl;
    cout << "0 - Chiudi posta " << endl;
    cin >> risposta;
    switch(risposta){
    case 1:
      cout << "NOME: ";
      cin >> nome;
      cout << "COGNOME: ";
      cin >> cognome;
      strcpy(elemento.nome, nome);
      strcpy(elemento.cognome, cognome);
      enqueue(fila_poste, elemento);
      break;
    case 2:
      dequeue(fila_poste);
      break;
    case 3:
      print(fila_poste);
      break;
    case 0:
      cout << " - - - POSTE CHIUSE - - - " << endl;
      break;
    default:
      cout << "Scelta non compresa " << endl;
      break;
    }
  }while(risposta!=0);

  return 0;
}
