CC = gcc
CFLAGS = -Wall -g -fsanitize=address,leak,undefined


.PHONY: all
all: cycle

cycle: cycle.c
	$(CC) $(CFLAGS) cycle.c Graph.c -o cycle


.PHONY: clean
clean:
	rm cycle