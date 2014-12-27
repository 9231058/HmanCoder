OBJ=Nodetype.o HaffmanTree.o main.o
CCFLAGS=-Wall
HmanCoder.out: $(OBJ)
	g++ $(CCFLAGS) -o HmanCoder.out $(OBJ)
main.o: main.cpp
	g++ $(CCFLAGS) -c main.cpp
HaffmanTree.o: HaffmanTree.h HaffmanTree.h MaxHeap.h Nodetype.h
	g++ $(CCFLAGS) -c HaffmanTree.cpp
Nodetype.o: Nodetype.h Nodetype.cpp
	g++ $(CCFLAGS) -c Nodetype.cpp
