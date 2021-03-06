struct persona{

  char nome[20];
  char cognome[20];

};

struct coda{
  int primo;
  int ultimo;
  int dim;
  persona * lista_persone;
};

int succ(int indice, const coda & c);

void init(coda & c);

void deinit(coda & c);

void enqueue(coda & c, persona elemento);

void dequeue(coda & c);

persona first(coda & c);

void print(const coda & c);
