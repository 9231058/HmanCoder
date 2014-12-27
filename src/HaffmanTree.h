/*
 * In The Name Of God
 * ========================================
 * [] File Name : HaffmanTree.h
 *
 * [] Creation Date : 24-12-2014
 *
 * [] Last Modified : Sat 27 Dec 2014 09:47:18 PM IRST
 *
 * [] Created By : Parham Alvani (parham.alvani@gmail.com)
 * =======================================
*/
#include "MaxHeap.h"
#include "Nodetype.h"

#include <string>

class HaffmanTree {
	private:
		Nodetype* mRoot;
		
		void makeCode(Nodetype *node, std::string bitCount);
	public:
		HaffmanTree(int n, MaxHeap<Nodetype*> &pq);
};
