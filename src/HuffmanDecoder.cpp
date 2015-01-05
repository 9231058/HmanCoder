/*
 * In The Name Of God
 * ========================================
 * [] File Name : HuffmanEncoder.cpp
 *
 * [] Creation Date : 27-12-2014
 *
 * [] Last Modified : Mon 05 Jan 2015 03:15:06 PM IRST
 *
 * [] Created By : Parham Alvani (parham.alvani@gmail.com)
 * =======================================
*/
#include <fstream>
#include <iostream>
#include <sstream>

#include "HuffmanTree.h"
#include "HuffmanDecoder.h"
#include "Bitstream.h"
#include "DeCodedChar.h"
#include "List.h"

HuffmanDecoder::HuffmanDecoder(const std::string &inputFile, const std::string &outputFile)
{
	mInputFile = inputFile;
	mOutputFile = outputFile;
}

void HuffmanDecoder::decode()
{
	std::ifstream inputFileStream(mInputFile.c_str(), std::ios::in);
	std::ofstream outputFileStream(mOutputFile.c_str(), std::ios::out);
	std::stringstream tempStream;
	int currentAscii;
	char currentChar;
	std::string currentCode;

	do {
		inputFileStream >> currentAscii >> currentCode;
		std::cout << currentAscii << " " << currentCode << std::endl;
		mDeCodedChars.insert(DeCodedChar(currentAscii, currentCode));
	} while(currentAscii != -1);
	inputFileStream.ignore(1, '\n');

	currentCode = "";
	InputBitStream inBitStream(inputFileStream);

	while (inBitStream.isGood()) {
		currentCode += inBitStream.GetNextBit();	
		currentChar = mDeCodedChars.find(DeCodedChar(-1, currentCode)).getChar();
		
		if (currentChar != -1) {
			outputFileStream << currentChar;
			std::cout << currentChar << " " << currentCode << std::endl;
			currentCode = "";
		}

		if (inBitStream.isEOF())
			break;
	}

	outputFileStream.close();
}
