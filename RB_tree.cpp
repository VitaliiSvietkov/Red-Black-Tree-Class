#include "RB_tree.h"
void RB_tree::insert(int value)
{
	if (root == nullptr)
	{
		root = new Leaf;
		root->data = value;
		root->color = 0;
	}
	else
	{
		int rootKey;
		Leaf* pointer = root;
		Leaf* leaf = new Leaf;
		leaf->data = value;
		Leaf* temp_parent = nullptr;
		while (pointer != nullptr)
		{
			rootKey = pointer->data;
			temp_parent = pointer;
			if (value >= rootKey)
				pointer = pointer->right;
			else
				pointer = pointer->left;
		}
		leaf->parent = temp_parent;
		if (value > temp_parent->data)
			temp_parent->right = leaf;
		else
			temp_parent->left = leaf;
		if (temp_parent->color)
			leaf->color = 0;
	}
}
Leaf* RB_tree::search(int value)
{
	Leaf* temp = root;
	if (temp == nullptr)
		return nullptr;
	while (temp != nullptr)
	{
		if (temp->data == value)
			return temp;
		else if (value > temp->data)
			temp = temp->right;
		else
			temp = temp->left;
	}
	return nullptr;
}
void RB_tree::print(Leaf* root)
{
	if (root != nullptr)
	{
		printf("The element: %d\n", root->data);
		if (root->color == 0)
			printf("Color: Black\n");
		else
			printf("Color: Red\n");
		if (root->parent != nullptr)
		{
			printf("Successor: %d\n", root->parent->data);
			if (root->parent->color == 0)
				printf("Color: Black\n\n");
			else
				printf("Color: Red\n\n");
		}
		else
			printf("Successor: no parent\n\n");

		print(root->left);
		if (root->right != nullptr)
		{
			print(root->right);
		}
	}
}

RB_tree::RB_tree() 
{ 
	root = nullptr; 
}
Leaf* RB_tree::getRoot()
{ 
	return root; 
}