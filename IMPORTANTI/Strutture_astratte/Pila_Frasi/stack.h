struct messaggio{

  char testo[100];
  
};

struct pila{

  int indice;
  messaggio *frasi;
  
};

void init(pila & p);

void push(pila & p, char * stringa);

char * pop(pila & p);

void deinit(pila & p);

