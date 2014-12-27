/*
 * In The Name Of God
 * ========================================
 * [] File Name : HaffmanTree.h
 *
 * [] Creation Date : 24-12-2014
 *
 * [] Last Modified : Sun 28 Dec 2014 02:15:18 AM IRST
 *
 * [] Created By : Parham Alvani (parham.alvani@gmail.com)
 * =======================================
*/
#include "MaxHeap.h"
#include "Nodetype.h"

#include <string>

class HuffmanTree {
	private:
		Nodetype* mRoot;
		
		void makeCode(Nodetype *node, std::string bitCount);
	public:
		HuffmanTree(int n, MaxHeap<Nodetype*> &pq);
};
