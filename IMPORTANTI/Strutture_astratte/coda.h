struct coda{
  int primo;
  int ultimo;
  int dim;
  int * v;
};

/*Allocata staticamente
struct coda{
int successivo;
int attuale;
int v[DIM];
}
*/

int succ(int indice, const coda & c);

void init(coda & c);

void deinit(coda & c);

void enqueue(coda & c, int elemento);

void dequeue(coda & c);

int first(coda & c);

void print(const coda & c);


