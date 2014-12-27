/*
 * In The Name Of God
 * ========================================
 * [] File Name : HaffmanTree.cpp
 *
 * [] Creation Date : 24-12-2014
 *
 * [] Last Modified : Sat 27 Dec 2014 10:51:15 PM IRST
 *
 * [] Created By : Parham Alvani (parham.alvani@gmail.com)
 * =======================================
*/
#include "MaxHeap.h"
#include "HaffmanTree.h"
#include "Nodetype.h"

#include <string>

HaffmanTree::HaffmanTree(int n, MaxHeap<Nodetype*> &pq)
{
	for (int i = 0; i < n; i++) {
		Nodetype *p = pq.top();
		pq.pop();
		Nodetype *q = pq.top();
		pq.pop();
		Nodetype *r = new Nodetype();
		r->setLeft(p);
		r->setRight(q);
		r->setFrequency(p->getFrequency() + q->getFrequency());
		pq.push(r);
	}
	mRoot = pq.top();
	pq.pop();
	makeCode(mRoot, "0");
}

void HaffmanTree::makeCode(Nodetype *node, std::string bitCount)
{
		
	node->increaseBitCode(bitCount);
	Nodetype *left = node->getLeft();
	Nodetype *right = node->getRight();
	if (left != NULL) {
		left->setBitCode(node->getBitCode());
		this->makeCode(left, "0");
	}
	if (right != NULL) {
		right->setBitCode(node->getBitCode());
		this->makeCode(right, "1");
	}
	//lets add it to the map now as a saving
	//if (node->IsLeafNode()) {
		// this->m_codeMap.insert( std::pair<std::string, std::string>(node->GetString(), node->GetBitCount()) );
	//}
}
