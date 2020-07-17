CC=g++
CFLAGS=-std=c++17 
DEPS = vector.h
OBJ = main.o vector.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
