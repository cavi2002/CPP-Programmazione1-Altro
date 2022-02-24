struct pila{
  int indice;
  int * v;
};

void init(pila & p);

void push(pila & p, int elemento);

void pop(pila & p);

int top(pila p);

void deinit(pila & p);

/*allocato staticamente
struct pila{
  int h;
  int v[];
}*/
