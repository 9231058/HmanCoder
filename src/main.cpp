/*
 * In The Name Of God
 * ========================================
 * [] File Name : main.cpp
 *
 * [] Creation Date : 24-12-2014
 *
 * [] Last Modified : Sun 28 Dec 2014 04:39:15 AM IRST
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

int main(int argc, char *argv[])
{
	TCLAP::CmdLine cmd("HmanCoder is simple haffman coder", ' ', "0.0.1");
	TCLAP::ValueArg<std::string> iPath("i", "input", "Input file", true, "", "string");
	TCLAP::ValueArg<std::string> oPath("o", "output", "Output file", true, "", "string");
	
	cmd.add(iPath);
	cmd.add(oPath);
	cmd.parse(argc, argv);

	/*
	 * some dummy code for testing
	 * our HuffmanTree class functionality
	*/

	Nodetype* n1 = new Nodetype('c', 10);
	Nodetype* n2 = new Nodetype('a', 20);
	MaxHeap<Nodetype*> pq;
	pq.push(n1);
	pq.push(n2);

	HuffmanTree::buildTree(2, pq);

	std::cout << n1->getBitCode() << std::endl;
	std::cout << n2->getBitCode() << std::endl;

	delete n1;
	delete n2;
}
