test: test.o
	g++ *.o -o peggy-tests -LUnitTest++/ -lUnitTest++ -IUnitTest++

test.o: test.cpp
	g++ -g -c *.cpp -o test.o

clean:
	rm -rf *.o
