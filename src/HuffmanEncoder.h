/*
 * In The Name Of God
 * ========================================
 * [] File Name : HuffmanEncoder.h
 *
 * [] Creation Date : 27-12-2014
 *
 * [] Last Modified : Sun 28 Dec 2014 03:56:35 AM IRST
 *
 * [] Created By : Parham Alvani (parham.alvani@gmail.com)
 * =======================================
*/
#pragma once
#include <string>

class HuffmanEncoder {
	private:
		std::string mInputFile;
		std::string mOutputFile;
	public:
		HuffmanEncoder(const std::string &inputFile, const std::string &outputFile);
		void encode();
};
