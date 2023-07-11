CC = gcc
CFLAGS = -Wall -g -fsanitize=address,leak,undefined


.PHONY: all
all: BSTreeNumNodes BSTreeHeight BSTreeReverse BSTreeNodeLevel BSTreeCountGreater BSTreeRotateRight

BSTreeNumNodes: BSTreeNumNodes.c
	$(CC) $(CFLAGS) BSTreeNumNodes.c BSTree.c -o BSTreeNumNodes

BSTreeHeight: BSTreeHeight.c
	$(CC) $(CFLAGS) BSTreeHeight.c BSTree.c -o BSTreeHeight

BSTreeReverse: BSTreeReverse.c
	$(CC) $(CFLAGS) BSTreeReverse.c BSTree.c -o BSTreeReverse

BSTreeNodeLevel: BSTreeNodeLevel.c
	$(CC) $(CFLAGS) BSTreeNodeLevel.c BSTree.c -o BSTreeNodeLevel

BSTreeCountGreater: BSTreeCountGreater.c
	$(CC) $(CFLAGS) BSTreeCountGreater.c BSTree.c -o BSTreeCountGreater

BSTreeRotateRight: BSTreeRotateRight.c
	$(CC) $(CFLAGS) BSTreeRotateRight.c BSTree.c -o BSTreeRotateRight

.PHONY: clean
clean:
	rm BSTreeNumNodes BSTreeHeight BSTreeReverse BSTreeNodeLevel BSTreeCountGreater BSTreeRotateRight