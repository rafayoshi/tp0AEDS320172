CC = gcc
CFLAGS = -g -O0 -Wall -Wextra -Werror -std=c99 -pedantic
OBJ = mainMatriz.o matriz.o
DEPS = matriz.h
VFLAGS = --leak-check=full --leak-resolution=high --show-reachable=yes --track-origins=yes
EXEC = ./exec < input
TIMED_RUN = time ./exec < input

all: exec

exec: $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o exec matriz.

valgrind:
	valgrind $(VFLAGS) $(EXEC)
run:
	$(EXEC)
timed:
	$(TIMED_RUN)
