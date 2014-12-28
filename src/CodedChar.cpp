/*
 * In The Name Of God
 * ========================================
 * [] File Name : CodedChar.cpp
 *
 * [] Creation Date : 28-12-2014
 *
 * [] Last Modified : Sun 28 Dec 2014 09:54:15 PM IRST
 *
 * [] Created By : Parham Alvani (parham.alvani@gmail.com)
 * =======================================
*/
#include <string>

#include "CodedChar.h"

CodedChar::CodedChar(char c, std::string code)
{
	mC = c;
	mCode = code;
}

std::string CodedChar::getCode()
{
	return mCode;
}


bool operator==(const CodedChar &op1, const CodedChar &op2)
{
	return (op1.mC == op2.mC);
}

bool operator<(const CodedChar &op1, const CodedChar &op2)
{
	return (op1.mC < op2.mC);
}

bool operator>(const CodedChar &op1, const CodedChar &op2)
{
	return (op1.mC > op2.mC);
}
