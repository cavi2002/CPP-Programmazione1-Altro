struct node;

typedef node * albero;

struct node{
  int value;
  albero left;
  albero right;
};

void init(albero & t);

void deinit(albero & t);

albero search(albero & t, int value);

void visit(const albero & t);

void insert(albero & t, int value);
