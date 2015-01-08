OBJ=Nodetype.o HuffmanTree.o main.o HuffmanEncoder.o HuffmanDecoder.o DeCodedChar.o CodedChar.o Bitstream.o
CCFLAGS=-Wall

HmanCoder.out: $(OBJ)
	g++ $(CCFLAGS) -o HmanCoder.out $(OBJ)
main.o: main.cpp HuffmanEncoder.h HuffmanDecoder.h
	g++ $(CCFLAGS) -c main.cpp
HuffmanTree.o: HuffmanTree.h HuffmanTree.cpp MaxHeap.h Nodetype.h
	g++ $(CCFLAGS) -c HuffmanTree.cpp
Nodetype.o: Nodetype.h Nodetype.cpp
	g++ $(CCFLAGS) -c Nodetype.cpp
HuffmanDecoder.o: HuffmanDecoder.h HuffmanDecoder.cpp Bitstream.h DeCodedChar.h BST.h
	g++ $(CCFLAGS) -c HuffmanDecoder.cpp
HuffmanEncoder.o: HuffmanEncoder.h HuffmanEncoder.cpp Nodetype.h Bitstream.h CodedChar.h List.h BST.h
	g++ $(CCFLAGS) -c HuffmanEncoder.cpp
CodedChar.o: CodedChar.h CodedChar.cpp
	g++ $(CCFLAGS) -c CodedChar.cpp
DeCodedChar.o: DeCodedChar.h DeCodedChar.cpp
	g++ $(CCFLAGS) -c DeCodedChar.cpp
Bitstream.o: Bitstream.h Bitstream.cpp
	g++ $(CCFLAGS) -c Bitstream.cpp
