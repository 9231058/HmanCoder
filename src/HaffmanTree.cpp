/*
 * In The Name Of God
 * ========================================
 * [] File Name : HaffmanTree.cpp
 *
 * [] Creation Date : 24-12-2014
 *
 * [] Last Modified : Wed 24 Dec 2014 11:35:30 PM IRST
 *
 * [] Created By : Parham Alvani (parham.alvani@gmail.com)
 * =======================================
*/
#include "MaxHeap.h"
#include "HaffmanTree.h"
#include "Nodetype.h"

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
}

void HaffmanTree::makeCode(int code, Nodetype* node)
{
		
}
