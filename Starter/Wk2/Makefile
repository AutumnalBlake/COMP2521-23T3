CC = gcc
CFLAGS = -Wall -g -fsanitize=address,leak,undefined


.PHONY: all
all: factorial list_length list_sum list_count_odd list_delete list_is_sorted fibonacci

factorial: factorial.c
	$(CC) $(CFLAGS) factorial.c -o factorial

list_length: list_length.c
	$(CC) $(CFLAGS) list_length.c ../../Util/list.c -o list_length

list_sum: list_sum.c
	$(CC) $(CFLAGS) list_sum.c ../../Util/list.c -o list_sum

list_count_odd: list_count_odd.c
	$(CC) $(CFLAGS) list_count_odd.c ../../Util/list.c -o list_count_odd

list_delete: list_delete.c
	$(CC) $(CFLAGS) list_delete.c ../../Util/list.c -o list_delete

list_is_sorted: list_is_sorted.c
	$(CC) $(CFLAGS) list_is_sorted.c ../../Util/list.c -o list_is_sorted

fibonacci: fibonacci.c
	$(CC) $(CFLAGS) fibonacci.c ../../Util/list.c -o fibonacci

