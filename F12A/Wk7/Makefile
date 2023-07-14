CC = gcc
CFLAGS = -Wall -g -fsanitize=address,leak,undefined


.PHONY: all
all: bfs

bfs: bfs.c
	$(CC) $(CFLAGS) bfs.c Graph.c Queue.c -o bfs


.PHONY: clean
clean:
	rm bfs