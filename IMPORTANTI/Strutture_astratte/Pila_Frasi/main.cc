#include <fstream>
#include "stack.h"
#include <cstring>
#include <iostream>
using namespace std;

const int DIM = 100;

int main(int argc, char * argv[]){

  if(argc!=3){
    cout << "Usage: ./main <input.txt> <output.txt>" << endl;
    return 0;
  }

  fstream input, output;

  input.open(argv[1], ios::in);
  output.open(argv[2], ios::app);

  if(input.fail()){
    cout << "Errore nell'aprire il file" << endl;
    return 0;
  }

  pila p;

  init(p);

  char * stringa = new char[DIM];
  int n_frasi = 0;
  while(input.getline(stringa, DIM)){
    push(p, stringa);
    n_frasi++;
  }

  int i = 0;
  
  while(i<n_frasi){
    stringa = pop(p);
    output << stringa << endl;
    i++;
  }

  deinit(p);
  
  input.close();
  output.close();
  
  return 0;
}
