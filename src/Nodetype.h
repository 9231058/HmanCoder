/*
 * In The Name Of God
 * ========================================
 * [] File Name : Nodetype.h
 *
 * [] Creation Date : 24-12-2014
 *
 * [] Last Modified : Sat 27 Dec 2014 05:30:27 AM IRST
 *
 * [] Created By : Parham Alvani (parham.alvani@gmail.com)
 * =======================================
*/
#pragma once

#include <bitset>

class Nodetype{
	private:
		char mSymbol;
		int mFrequency;
		int mCodeSize;
		std::bitset<255> mCode;
		Nodetype* mLeft;
		Nodetype* mRight;
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
};