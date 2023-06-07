CC = gcc
CFLAGS = -Wall -g -fsanitize=address,leak,undefined


.PHONY: all
all: factorial lists wrapped_list fibonacci

factorial: factorial.c
	$(CC) $(CFLAGS) factorial.c -o factorial

wrapped_list: wrapped_list.c
	$(CC) $(CFLAGS) wrapped_list.c ../../Util/list.c -o wrapped_list

lists: lists.c
	$(CC) $(CFLAGS) lists.c ../../Util/list.c -o lists

fibonacci: fibonacci.c
	$(CC) $(CFLAGS) fibonacci.c -o fibonacci

.PHONY: clean
clean:
	rm factorial lists wrapped_list fibonacci