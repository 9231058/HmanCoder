/*
 * In The Name Of God
 * ========================================
 * [] File Name : CodedChar.h
 *
 * [] Creation Date : 28-12-2014
 *
 * [] Last Modified : Mon 29 Dec 2014 02:10:03 AM IRST
 *
 * [] Created By : Parham Alvani (parham.alvani@gmail.com)
 * =======================================
*/
#pragma once
#include <string>

class CodedChar {
	private:
		char mC;
		std::string mCode;
	public:
		CodedChar(char c, std::string mCode);
		CodedChar();

		std::string getCode() const;
		
		friend bool operator==(const CodedChar &op1, const CodedChar &op2);
		friend bool operator<(const CodedChar &op1, const CodedChar &op2);
		friend bool operator>(const CodedChar &op1, const CodedChar &op2);
};
