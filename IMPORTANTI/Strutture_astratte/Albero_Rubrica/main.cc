#include <iostream>
#include "albero.h"
#include <cstring>
using namespace std;

int main(){

  albero albero_binario;
  init(albero_binario);
  cout << "cognome - Inserisci cognome" << endl;
  cout << "visualizza - Visualizza rubrica" << endl;
  cout << "ricerca - Ricerca contatto per cognome" << endl;
  cout << "esci - Termina programma" << endl;
  char input[MAX_DIM];
  while(strcmp(input, "esci")!=0){
    cin >> input;
    if(strcmp(input, "visualizza")==0){
      cout << endl;
      visit(albero_binario);
      cout << endl;
    }else if(strcmp(input, "ricerca")==0){
      cout << endl;
      cout << "Inserisci cognome da cercare: ";
      cin >> input;
      if(search(albero_binario, input)==NULL){
	cout << "Cognome non presente" << endl;
      }else{
	cout << "Cognome presente" << endl;
      }
    }else if(strcmp(input, "esci")==0){
      cout << "Chiusura programma" << endl;
      deinit(albero_binario);
    }else{
      insert(albero_binario, input);
    }
  }
  return 0;
}
