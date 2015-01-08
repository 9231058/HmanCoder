/*
 * In The Name Of God
 * ========================================
 * [] File Name : HuffmanEncoder.h
 *
 * [] Creation Date : 27-12-2014
 *
 * [] Last Modified : Mon 05 Jan 2015 02:38:17 PM IRST
 *
 * [] Created By : Parham Alvani (parham.alvani@gmail.com)
 * =======================================
*/
#pragma once
#include <string>
#include <iostream>

#include "BST.h"
#include "DeCodedChar.h"

class HuffmanDecoder {
	private:
		std::string mInputFile;
		std::string mOutputFile;
		BST<DeCodedChar> mDeCodedChars;

		void read();
	public:
		HuffmanDecoder(const std::string &inputFile, const std::string &outputFile);
		void decode();
		
};
