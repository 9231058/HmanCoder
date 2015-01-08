/*
 * In The Name Of God
 * ========================================
 * [] File Name : HaffmanTree.h
 *
 * [] Creation Date : 24-12-2014
 *
 * [] Last Modified : Sun 28 Dec 2014 04:26:09 AM IRST
 *
 * [] Created By : Parham Alvani (parham.alvani@gmail.com)
 * =======================================
*/
#pragma once

#include <string>

#include "MaxHeap.h"
#include "Nodetype.h"
/*
 * This class is backbone of whole project.
 * This class using static method buildTree(), to build a huffman tree
 * and initiate bitCode of nodes we gave to it.
 * Note that this class get node pointer and set code on them.
*/
class HuffmanTree {
	private:
		static Nodetype *mRoot;
		static void makeCode(Nodetype *node, std::string bitCount);
	public:
		static void buildTree(int n, MaxHeap<Nodetype*> &pq);
};
