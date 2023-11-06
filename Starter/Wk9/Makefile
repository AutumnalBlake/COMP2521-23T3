CC = gcc
CFLAGS = -Wall -g -fsanitize=address,leak,undefined


.PHONY: all
all: 3sum memo

3sum: 3sum.c
	$(CC) $(CFLAGS) 3sum.c HashTable.c -o 3sum

memo: memo.c
	$(CC) $(CFLAGS) memo.c HashTable.c -o memo


.PHONY: clean
clean:
	rm 3sum memo