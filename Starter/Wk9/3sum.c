#include "HashTable.h"
#include <assert.h>

int main() {
    HT ht = HTNew();
    assert(!HTContains(ht, 7));
    HTInsert(ht, 10, 100);
    HTInsert(ht, 33, 200);
    HTInsert(ht, 41, 300);
    HTInsert(ht, 97, 400);
    assert(HTContains(ht, 97));
    assert(HTGet(ht, 97) == 400);
    HTFree(ht);

    ht = HTNew();

    for (int i = 0; i < 100; i += 2) {
        HTInsert(ht, i, 10 * i);
    }

    for (int i = 0; i < 100; i++) {
        assert(HTContains(ht, i) == (i % 2 == 0));
        if (i % 2 == 0) assert(HTGet(ht, i) == 10 * i);
    }
}