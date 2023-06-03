struct node {
  int value;
  struct node *next;
};

struct list {
  struct node *head;
};

struct node *listFromArgs(int argc, char *argv[]);

struct node *listFromArray(int size, int *arr);

void listPrint(struct node *l);

void listFree(struct node *l);