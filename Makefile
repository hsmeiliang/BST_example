all: main.cpp BST_simple.o
	g++ main.cpp BST_simple.o -o BST_test -lm

BST_simple.o: BST_simple.cpp BST_simple.h
	g++ -c BST_simple.cpp -lm
clean:
	rm -f BST_test *.o
