CC = gcc
CFLAGS = -I. -Wall -Wextra -O2

cbin: cbin.o fn.o
	$(CC) $(CFLAGS) $^ -o $@
