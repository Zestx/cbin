CC = gcc
CFLAGS = -I. -Wall -Wextra

cbin: cbin.o fn.o
	$(CC) $(CFLAGS) $^ -o $@
