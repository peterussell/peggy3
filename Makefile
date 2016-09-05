CC = g++
CFLAGS = -c -g
BIN = ./bin
SRC = ./src

peggy: $(SRC)/main.o
	$(CC) $(SRC)/main.o -o peggy

peggy.o: $(SRC)/main.cpp
	$(CC) $(CFLAGS) $(SRC)/main.cpp -o $(SRC)/main.o
