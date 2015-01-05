/*
 * In The Name Of God
 * ========================================
 * [] File Name : main.cpp
 *
 * [] Creation Date : 24-12-2014
 *
 * [] Last Modified : Mon 05 Jan 2015 02:57:32 PM IRST
 *
 * [] Created By : Parham Alvani (parham.alvani@gmail.com)
 * =======================================
*/
#include <iostream>
#include <string>
#include <tclap/CmdLine.h>

#include "HuffmanTree.h"
#include "HuffmanDecoder.h"
#include "HuffmanEncoder.h"

int main(int argc, char *argv[])
{
	TCLAP::CmdLine cmd("HmanCoder is simple haffman coder", ' ', "0.0.1");
	TCLAP::SwitchArg ifX("x","extract","Extract input file to output file", cmd, false);	
	TCLAP::ValueArg<std::string> iPath("i", "input", "Input file", true, "", "string");
	TCLAP::ValueArg<std::string> oPath("o", "output", "Output file", true, "", "string");
	
	cmd.add(iPath);
	cmd.add(oPath);
	cmd.parse(argc, argv);
	if (!ifX.getValue()) {
		HuffmanEncoder hman(iPath.getValue(), oPath.getValue());
		hman.encode();
	} else {
		HuffmanDecoder hman(iPath.getValue(), oPath.getValue());
		hman.decode();
	}
}
