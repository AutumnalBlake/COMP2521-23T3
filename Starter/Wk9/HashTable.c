#include "HashTable.h"
#include <assert.h>
#include <stdlib.h>

#define INITIAL_SIZE 4

struct node {
    int k;
    int v;
    struct node * next;
};

struct hash_table {
    int n_items;
    int n_buckets;
    struct node **buckets;
};

struct node *list_insert(struct node *list, int k, int v) {
    struct node *new = malloc(sizeof(struct node));
    new->k = k;
    new->v = v;
    new->next = list;
    return new;
}

void list_free(struct node *l) {
    if (l == NULL)
        return;
    list_free(l->next);
    free(l);
}

HT HTNew(void) {
    HT ht = malloc(sizeof(struct hash_table));
    ht->n_buckets = INITIAL_SIZE;
    ht->n_items = 0;
    ht->buckets = calloc(INITIAL_SIZE, sizeof(struct node *));
    return ht;
}

void HTFree(HT ht) {
    for (int i = 0; i < ht->n_buckets; i++) list_free(ht->buckets[i]);
    free(ht->buckets);
    free(ht);
}

void HTInsert(HT ht, int key, int value) {
    if (ht->n_items >= ht->n_buckets) {
        // Resize
        int new_size = 2 * ht->n_buckets;

        struct node **new_buckets =
            calloc(new_size, sizeof(struct node *));

        for (int i = 0; i < ht->n_buckets; i++) {
            for (struct node *n = ht->buckets[i]; n != NULL; n = n->next) {
                new_buckets[n->k % new_size] = list_insert(new_buckets[n->k % new_size], n->k, n->v);
            }
            list_free(ht->buckets[i]);
        }

        ht->n_buckets = new_size;
        free(ht->buckets);
        ht->buckets = new_buckets;
    }

    int hash = key % ht->n_buckets;
    ht->buckets[hash] = list_insert(ht->buckets[hash], key, value);
}

bool HTContains(HT ht, int key) {
    int hash = key % ht->n_buckets;
    for (struct node *n = ht->buckets[hash]; n != NULL; n = n->next) {
        if (n->k == key) return true;
    }
    return false;
}

int HTGet(HT ht, int key) {
        int hash = key % ht->n_buckets;
    for (struct node *n = ht->buckets[hash]; n != NULL; n = n->next) {
        if (n->k == key) return n->v;
    }
    assert(false);
}