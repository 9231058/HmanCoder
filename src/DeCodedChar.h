/*
 * In The Name Of God
 * ========================================
 * [] File Name : DeCodedChar.h
 *
 * [] Creation Date : 28-12-2014
 *
 * [] Last Modified : Mon 05 Jan 2015 02:23:41 PM IRST
 *
 * [] Created By : Parham Alvani (parham.alvani@gmail.com)
 * =======================================
*/
#pragma once
#include <string>

class DeCodedChar {
	private:
		char mC;
		std::string mCode;
	public:
		DeCodedChar(char c, std::string mCode);
		DeCodedChar();

		char getChar() const;
		
		friend bool operator==(const DeCodedChar &op1, const DeCodedChar &op2);
		friend bool operator<(const DeCodedChar &op1, const DeCodedChar &op2);
		friend bool operator>(const DeCodedChar &op1, const DeCodedChar &op2);
};
