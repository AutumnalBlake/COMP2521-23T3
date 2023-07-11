CC = gcc
CFLAGS = -Wall -g -fsanitize=address,leak,undefined


.PHONY: all
all: list_print_every_second palindrome string_reverse

list_print_every_second: list_print_every_second.c
	$(CC) $(CFLAGS) list_print_every_second.c ../../Util/list.c -o list_print_every_second

palindrome: palindrome.c
	$(CC) $(CFLAGS) palindrome.c -o palindrome

string_reverse: string_reverse.c
	$(CC) $(CFLAGS) string_reverse.c -o string_reverse

.PHONY: clean
clean:
	rm list_print_every_second palindrome string_reverse