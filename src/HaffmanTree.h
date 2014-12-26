/*
 * In The Name Of God
 * ========================================
 * [] File Name : HaffmanTree.h
 *
 * [] Creation Date : 24-12-2014
 *
 * [] Last Modified : Wed 24 Dec 2014 11:31:44 PM IRST
 *
 * [] Created By : Parham Alvani (parham.alvani@gmail.com)
 * =======================================
*/
#include "MaxHeap.h"
#include "Nodetype.h"

class HaffmanTree {
	private:
		Nodetype* mRoot;
		
		void makeCode(int code, Nodetype* node);
	public:
		HaffmanTree(int n, MaxHeap<Nodetype*> &pq);
};
