CC = gcc
CFLAGS = -Wall -Werror -g -fsanitize=address,leak,undefined


.PHONY: all
all: loops swap list_sum list_delete stack_size heap_size

loops: loops.c
	$(CC) $(CFLAGS) loops.c -o loops.exe

swap: swap.c
	$(CC) $(CFLAGS) swap.c -o swap.exe

list_sum: list_sum.c ../../Util/list.c
	$(CC) $(CFLAGS) list_sum.c ../../Util/list.c -o list_sum.exe

list_delete: list_delete.c ../../Util/list.c
	$(CC) $(CFLAGS) list_delete.c ../../Util/list.c -o list_delete.exe

stack_size: stack_size.c
	gcc -O0 stack_size.c -o stack_size.exe

heap_size: heap_size.c
	gcc -O0 heap_size.c -o heap_size.exe

.PHONY: clean
clean:
	rm -f *.exe
