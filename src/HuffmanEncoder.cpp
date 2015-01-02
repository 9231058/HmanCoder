/*
 * In The Name Of God
 * ========================================
 * [] File Name : HuffmanEncoder.cpp
 *
 * [] Creation Date : 27-12-2014
 *
 * [] Last Modified : Fri 02 Jan 2015 11:23:17 PM IRST
 *
 * [] Created By : Parham Alvani (parham.alvani@gmail.com)
 * =======================================
*/
#include <fstream>
#include <iostream>
#include <sstream>

#include "HuffmanTree.h"
#include "HuffmanEncoder.h"
#include "Bitstream.h"
#include "Nodetype.h"
#include "CodedChar.h"
#include "List.h"
#include "MaxHeap.h"

HuffmanEncoder::HuffmanEncoder(const std::string &inputFile, const std::string &outputFile)
{
	mInputFile = inputFile;
	mOutputFile = outputFile;
}

void HuffmanEncoder::read()
{
	std::ifstream inputFileStream(mInputFile.c_str(), std::ios::in);
	std::ofstream outputFileStream(mOutputFile.c_str(), std::ios::out);
	int chars[256];
	char currentChar;
	List<Nodetype*> nodes;
	MaxHeap<Nodetype*> pq;
	
	for (int i = 0; i < 255; i++)
		chars[i] = 0;

	while (inputFileStream.good()) {
		inputFileStream.get(currentChar);
		if (inputFileStream.eof())
			break;
		chars[(int)currentChar]++;
	}
	
	for (int i = 0; i < 256; i++)
		if (chars[i] > 0)
			nodes.push_back(new Nodetype(i, chars[i]));
	
	for (int i = 0; i < nodes.size(); i++)
		pq.push(nodes[i]);

	HuffmanTree::buildTree(nodes.size(), pq);

	for (int i = 0; i < nodes.size(); i++) {
		CodedChar codedChar = CodedChar(nodes[i]->getSymbol(), nodes[i]->getBitCode());
		outputFileStream << (int) nodes[i]->getSymbol() << " " << nodes[i]->getBitCode() << std::endl;
		mCodedChars.insert(codedChar);
		delete nodes[i];
	}

	outputFileStream.close();
	inputFileStream.close();
}

void HuffmanEncoder::encode()
{
	read();

	std::ifstream inputFileStream(mInputFile.c_str(), std::ios::in);
	std::stringstream tempStream;
	char currentChar;
	OutputBitStream outBitStream(tempStream);

	while (inputFileStream.good()) {
		inputFileStream.get(currentChar);
		if (inputFileStream.eof())
			break;
		CodedChar codedChar = CodedChar(currentChar, "");
		std::string binaryCode = mCodedChars.find(codedChar).getCode();
		outBitStream.InsertBits(binaryCode);
	}

	std::ofstream outputFileStream(mOutputFile.c_str(), std::ios::app);
	outputFileStream << outBitStream;
	outputFileStream.close();
}
