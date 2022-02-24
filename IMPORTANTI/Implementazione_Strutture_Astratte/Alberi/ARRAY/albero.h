struct albero{
  int * v;
  int i;
};

const int DIM = 100;

void init(albero & t);

void deinit(albero & t);

void insert(albero & t, int value);

void visit(const albero t);

albero search(const albero & t, int elemento);
