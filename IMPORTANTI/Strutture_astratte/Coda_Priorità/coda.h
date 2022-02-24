struct messaggio{

  char testo[10000];
  int priorita;
  
};

struct coda{
  int primo;
  int ultimo;
  int dim;
  messaggio * lista_messaggi;
};

int succ(int indice, const coda & c);

void init(coda & c);

void deinit(coda & c);

void enqueue(coda & c, messaggio elemento);

void dequeue(coda & c);

messaggio first(coda & c);

void print(const coda & c);
