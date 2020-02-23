#pragma once
#ifndef RBTREE
#define RBTREE
#include <iostream>
using namespace std;
struct Leaf
{
	int data;
	Leaf* left = nullptr;
	Leaf* right = nullptr;
	Leaf* parent = nullptr;
	bool color = 1;
};

class RB_tree
{
private:
	Leaf* root;
public:
	RB_tree();
	Leaf* getRoot();
	void insert(int value);
	Leaf* search(int value);
	void print(Leaf* root);
};

#endif