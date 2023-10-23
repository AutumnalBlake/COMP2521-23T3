#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"
#define s struct
#define a assert
#define f free
#define m malloc
#define r return
#define v void
#define Q Queue
s n {int i;s n *x;};s queue {s n *f;s n *b;int z;};static s n *cn(int i);Q QueueNew(v){Q w=m(sizeof(*w));if(w == 0){fprintf(stderr, "QueueNew: Insufficient memory!\n");exit(EXIT_FAILURE);} w->f=0;w->b=0;w->z=0;r w;}v QueueFree(Q q){a(q!=0);s n *c=q->f;while(c!=0){s n *t=c;c=c->x;f(t);} f(q);}v QueueEnqueue(Q q, int i){s n *w=cn(i);if(q->z == 0){q->f=w;}else{q->b->x=w;} q->b=w;q->z++;}static s n *cn(int i){s n *w=m(sizeof(*w));if(w == 0){fprintf(stderr, "QueueEnqueue: Insufficient memory!\n");exit(EXIT_FAILURE);} w->i=i;w->x=0;r w;}int QueueDequeue(Q q){a(q!=0);a(QueueSize(q)> 0);int i=q->f->i;s n *wf=q->f->x;f(q->f);q->f=wf;q->z--;if(q->z == 0){q->b=0;} r i;}int QueuePeek(Q q){a(q!=0);a(QueueSize(q)> 0);r q->f->i;}int QueueSize(Q q){a(q!=0);r q->z;}bool QueueIsEmpty(Q q){a(q!=0);r (QueueSize(q)== 0);}v QueueDump(Q q, FILE *fp){a(q!=0);s n *c=q->f;while(c!=0){if(c!=q->f){fprintf(fp, " ");} fprintf(fp, "%d", c->i);c=c->x;} fprintf(fp, "\n");}