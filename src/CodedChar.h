/*
 * In The Name Of God
 * ========================================
 * [] File Name : CodedChar.h
 *
 * [] Creation Date : 28-12-2014
 *
 * [] Last Modified : Sun 28 Dec 2014 09:55:34 PM IRST
 *
 * [] Created By : Parham Alvani (parham.alvani@gmail.com)
 * =======================================
*/
#include <string>

class CodedChar {
	private:
		char mC;
		std::string mCode;
	public:
		CodedChar(char c, std::string mCode);
		std::string getCode();
		
		friend bool operator==(const CodedChar &op1, const CodedChar &op2);
		friend bool operator<(const CodedChar &op1, const CodedChar &op2);
		friend bool operator>(const CodedChar &op1, const CodedChar &op2);
};
