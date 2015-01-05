/*
 * In The Name Of God
 * ========================================
 * [] File Name : Nodetype.cpp
 *
 * [] Creation Date : 24-12-2014
 *
 * [] Last Modified : Mon 05 Jan 2015 03:51:03 PM IRST
 *
 * [] Created By : Parham Alvani (parham.alvani@gmail.com)
 * =======================================
*/
#include "Nodetype.h"
#include <string>

Nodetype::Nodetype()
{
	mFrequency = 0;
	mLeft = NULL;
	mRight = NULL;
}

Nodetype::Nodetype(char symbol, int frequency)
{
	mSymbol = symbol;
	mFrequency = frequency;
	mLeft = NULL;
	mRight = NULL;
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

bool Nodetype::isLeaf()
{
	return (!mLeft && !mRight);
}

bool operator<(Nodetype o1, Nodetype o2)
{
	return (o1.mFrequency > o2.mFrequency);
}
bool operator>=(Nodetype o1, Nodetype o2)
{
	return (o1.mFrequency <= o2.mFrequency);
}
