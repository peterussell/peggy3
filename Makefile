CC = g++
CFLAGS = -c -g
BIN = ./peg
SRC = $(shell find src -name *.cpp)
INC = $(shell find include -name *.cpp)
OBJ = $(SRC:.cpp=.o)
INCOBJ = $(INC:.cpp=.o)

all: $(BIN)

$(BIN): $(OBJ) $(INCOBJ)
	$(CC) $(OBJ) $(INCOBJ) -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ $< 

clean:
	rm -rf $(OBJ) $(INCOBJ) $(BIN)

vg:
	valgrind --dsymutil=yes $(BIN)
