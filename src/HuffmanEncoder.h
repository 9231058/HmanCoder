/*
 * In The Name Of God
 * ========================================
 * [] File Name : HuffmanEncoder.h
 *
 * [] Creation Date : 27-12-2014
 *
 * [] Last Modified : Sat 27 Dec 2014 10:06:44 PM IRST
 *
 * [] Created By : Parham Alvani (parham.alvani@gmail.com)
 * =======================================
*/
#include <string>

class HuffmanEncoder {
	private:
		std::string inputFile;
		std::string outputFile;
	public:
		HuffmanEncoder(const std::string &inputFile, const std::string &outputFile);
}
