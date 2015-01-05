/*
 * In The Name Of God
 * ========================================
 * [] File Name : CodedChar.cpp
 *
 * [] Creation Date : 28-12-2014
 *
 * [] Last Modified : Mon 05 Jan 2015 02:23:43 PM IRST
 *
 * [] Created By : Parham Alvani (parham.alvani@gmail.com)
 * =======================================
*/
#include <string>

#include "DeCodedChar.h"

DeCodedChar::DeCodedChar(char c, std::string code)
{
	mC = c;
	mCode = code;
}

DeCodedChar::DeCodedChar()
{
	mC = ' ';
	mCode = "";
}

char DeCodedChar::getChar() const
{
	return mC;
}


bool operator==(const DeCodedChar &op1, const DeCodedChar &op2)
{
	return (op1.mCode == op2.mCode);
}

bool operator<(const DeCodedChar &op1, const DeCodedChar &op2)
{
	return (op1.mCode < op2.mCode);
}

bool operator>(const DeCodedChar &op1, const DeCodedChar &op2)
{
	return (op1.mCode > op2.mCode);
}
