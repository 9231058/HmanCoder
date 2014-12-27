/*
 * In The Name Of God
 * ========================================
 * [] File Name : Nodetype.cpp
 *
 * [] Creation Date : 24-12-2014
 *
 * [] Last Modified : Sat 27 Dec 2014 09:45:26 PM IRST
 *
 * [] Created By : Parham Alvani (parham.alvani@gmail.com)
 * =======================================
*/
#include "Nodetype.h"
#include <string>

Nodetype::Nodetype()
{
	mFrequency = 0;
}

Nodetype::Nodetype(char symbol, int frequency)
{
	mSymbol = symbol;
	mFrequency = frequency;
}

void Nodetype::setSymbol(char symbol)
{
	mSymbol = symbol;
}

char Nodetype::getSymbol()
{
	return mSymbol;
}

void Nodetype::setFrequency(int frequency)
{
	mFrequency = frequency;
}

int Nodetype::getFrequency()
{
	return mFrequency;
}

void Nodetype::setLeft(Nodetype* left)
{
	mLeft = left;
}

Nodetype* Nodetype::getLeft()
{
	return mLeft;
}

void Nodetype::setRight(Nodetype* right)
{
	mRight = right;
}

Nodetype* Nodetype::getRight()
{
	return mRight;
}

void Nodetype::increaseBitCode(std::string code)
{
	mCode += code;
}

std::string Nodetype::getBitCode() const
{
	return mCode;
}

void Nodetype::setBitCode(std::string code)
{
	mCode = code;
}
