OBJ=Nodetype.o HuffmanTree.o main.o HuffmanEncoder.o
CCFLAGS=-Wall
HmanCoder.out: $(OBJ)
	g++ $(CCFLAGS) -o HmanCoder.out $(OBJ)
main.o: main.cpp MaxHeap.h
	g++ $(CCFLAGS) -c main.cpp
HuffmanTree.o: HuffmanTree.h HuffmanTree.cpp MaxHeap.h Nodetype.h
	g++ $(CCFLAGS) -c HuffmanTree.cpp
Nodetype.o: Nodetype.h Nodetype.cpp
	g++ $(CCFLAGS) -c Nodetype.cpp
HuffmanEncoder.o: HuffmanEncoder.h HuffmanEncoder.cpp Nodetype.h
	g++ $(CCFLAGS) -c HuffmanEncoder.cpp
