CC = g++
CFLAGS = -c -g
BIN = ./bin
SRC = ./src
INC = ./include

peggy: $(SRC)/main.o includes.o
	$(CC) $(SRC)/main.o $(INC)/includes.o -o peggy

peggy.o: $(SRC)/main.cpp
	$(CC) $(CFLAGS) $(SRC)/main.cpp -o $(SRC)/main.o

includes.o: $(INC)/jsoncpp.cpp
	$(CC) $(CFLAGS) $(INC)/jsoncpp.cpp -o $(INC)/includes.o

clean:
	rm -rf $(SRC)/*.o
