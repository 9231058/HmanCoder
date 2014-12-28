/*
 * In The Name Of God
 * ========================================
 * [] File Name : HaffmanTree.cpp
 *
 * [] Creation Date : 24-12-2014
 *
 * [] Last Modified : Sun 28 Dec 2014 04:28:51 AM IRST
 *
 * [] Created By : Parham Alvani (parham.alvani@gmail.com)
 * =======================================
*/
#include <string>

#include "MaxHeap.h"
#include "HuffmanTree.h"
#include "Nodetype.h"

Nodetype *HuffmanTree::mRoot = NULL;

void HuffmanTree::buildTree(int n, MaxHeap<Nodetype*> &pq)
{
	for (int i = 0; i < n - 1; i++) {
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
	makeCode(mRoot, "");
}

void HuffmanTree::makeCode(Nodetype *node, std::string bitCount)
{
		
	node->increaseBitCode(bitCount);
	Nodetype *left = node->getLeft();
	Nodetype *right = node->getRight();
	if (left != NULL) {
		left->setBitCode(node->getBitCode());
		HuffmanTree::makeCode(left, "0");
	}
	if (right != NULL) {
		right->setBitCode(node->getBitCode());
		HuffmanTree::makeCode(right, "1");
	}
	if (!node->isLeaf())
		delete node;
}
