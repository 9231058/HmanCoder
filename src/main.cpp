/*
 * In The Name Of God
 * ========================================
 * [] File Name : main.cpp
 *
 * [] Creation Date : 24-12-2014
 *
 * [] Last Modified : Sat 27 Dec 2014 09:54:27 PM IRST
 *
 * [] Created By : Parham Alvani (parham.alvani@gmail.com)
 * =======================================
*/
#include <iostream>
#include <string>
#include <tclap/CmdLine.h>
#include "Nodetype.h"
#include "MaxHeap.h"

int main(int argc, char *argv[])
{
	TCLAP::CmdLine cmd("HmanCoder is simple haffman coder", ' ', "0.0.1");
	TCLAP::ValueArg<std::string> iPath("i", "input", "Input file", true, "", "string");
	TCLAP::ValueArg<std::string> oPath("o", "output", "Output file", true, "", "string");
	
	cmd.add(iPath);
	cmd.add(oPath);
	cmd.parse(argc, argv);


}
