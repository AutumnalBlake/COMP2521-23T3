CC = gcc
CFLAGS = -Wall -g -fsanitize=address,leak,undefined


.PHONY: all
all: loops swap list_sum list_delete stack_size heap_size

loops: loops.c
	$(CC) $(CFLAGS) loops.c -o loops

swap: swap.c
	$(CC) $(CFLAGS) swap.c -o swap

list_sum: list_sum.c
	$(CC) $(CFLAGS) ../../Util/list.c list_sum.c -o list_sum

list_delete: list_delete.c
	$(CC) $(CFLAGS) ../../Util/list.c list_delete.c -o list_delete

stack_size: stack_size.c
	gcc -O0 stack_size.c -o stack_size

heap_size: heap_size.c
	gcc -O0 heap_size.c -o heap_size

.PHONY: clean
clean:
	rm loops swap list_sum list_delete stack_size heap_size
