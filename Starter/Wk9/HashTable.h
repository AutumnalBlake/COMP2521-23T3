#include <stdbool.h>
typedef struct hash_table *HT;

HT HTNew(void);
void HTFree(HT ht);
void HTInsert(HT ht, int key, int value);
bool HTContains(HT ht, int key);
int HTGet(HT ht, int key);