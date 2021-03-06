const int MAX_DIM = 50;

struct node;

typedef node * albero;

struct node{
  char value[MAX_DIM];
  albero left;
  albero right;
};

void init(albero & t);

void deinit(albero & t);

albero search(albero & t, char value[]);

void visit(const albero & t);

void insert(albero & t, char value[]);
