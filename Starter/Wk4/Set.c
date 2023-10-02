#include <stdbool.h>
#include <stdlib.h>
#include "Set.h"
#define INIT_CAP 8

struct set {
    int *elems;
    int size;
    int cap;
};

// Creates a new empty set
Set SetNew(void) {
    Set s = malloc(sizeof(struct set));
    s->elems = malloc(INIT_CAP * sizeof(int));
    s->size = 0;
    s->cap = INIT_CAP;
    return s;
}

// Frees memory allocated to the set
void SetFree(Set s) {
    free(s->elems);
    free(s);
}

// Inserts an element into the set
void SetInsert(Set s, int elem) {
    if (SetContains(s, elem)) return;

    if (s->size == s->cap) {
        s->cap *= 2;
        s->elems = realloc(s->elems, s->cap * sizeof(int));
    }

    s->elems[s->size] = elem;
    s->size++;
}

// Deletes an element from the set
void SetDelete(Set s, int elem) {
    if (!SetContains(s, elem))
        return;

    bool found = false;
    for (int i = 0; i < s->size - 1; i++) {
        if (s->elems[i] == elem) {
            found = true;
        }
        if (found) {
            s->elems[i] = s->elems[i + 1];
        }
    }

    s->size--;
}

// Returns true if the given element is in the set, and false otherwise
bool SetContains(Set s, int elem) {
    for (int i = 0; i < s->size; i++)
        if (s->elems[i] == elem)
            return true;
    return false;
}

// Returns the number of elements in the set
int SetSize(Set s) {
    return s->size;
}