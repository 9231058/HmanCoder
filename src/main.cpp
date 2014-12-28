/*
 * In The Name Of God
 * ========================================
 * [] File Name : main.cpp
 *
 * [] Creation Date : 24-12-2014
 *
 * [] Last Modified : Mon 29 Dec 2014 02:03:09 AM IRST
 *
 * [] Created By : Parham Alvani (parham.alvani@gmail.com)
 * =======================================
*/
#include <iostream>
#include <string>
#include <tclap/CmdLine.h>

#include "Nodetype.h"
#include "MaxHeap.h"
#include "HuffmanTree.h"
#include "HuffmanEncoder.h"

int main(int argc, char *argv[])
{
	TCLAP::CmdLine cmd("HmanCoder is simple haffman coder", ' ', "0.0.1");
	TCLAP::ValueArg<std::string> iPath("i", "input", "Input file", true, "", "string");
	TCLAP::ValueArg<std::string> oPath("o", "output", "Output file", true, "", "string");
	
	cmd.add(iPath);
	cmd.add(oPath);
	cmd.parse(argc, argv);
	
	HuffmanEncoder hman(iPath.getValue(), oPath.getValue());
	hman.encode();
}
