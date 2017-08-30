CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c99 -pedantic -O2
OBJ = mainMatriz.o matriz.o
DEPS = matriz.h
VFLAGS = --leak-check=full --leak-resolution=high --show-reachable=yes --track-origins=yes
EXEC = ./exec < teste/teste10.in
TIMED_RUN = time ./exec < teste/teste10.in

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
