/*
 * In The Name Of God
 * ========================================
 * [] File Name : Nodetype.h
 *
 * [] Creation Date : 24-12-2014
 *
 * [] Last Modified : Sun 28 Dec 2014 04:03:31 AM IRST
 *
 * [] Created By : Parham Alvani (parham.alvani@gmail.com)
 * =======================================
*/
#pragma once

#include <string>
/*
 * This class represent a node
 * in huffman tree.
*/
class Nodetype {
	private:
		char mSymbol;
		int mFrequency;
		std::string mCode;
		Nodetype *mLeft;
		Nodetype *mRight;
	public:
		Nodetype();
		Nodetype(char symbol, int frequency);
		
		void setSymbol(char symbol);
		char getSymbol();
		
		void setFrequency(int frequency);
		int getFrequency();
		
		void setLeft(Nodetype *left);
		Nodetype *getLeft();
		
		void setRight(Nodetype *right);
		Nodetype *getRight();

		void increaseBitCode(std::string code);
		std::string getBitCode() const;
		void setBitCode(std::string code);

		bool isLeaf();
};
