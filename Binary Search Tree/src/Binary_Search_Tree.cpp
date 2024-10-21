#include "Binary_Search_Tree.h"

BstNode* CreatNewNode(int x)
{
	BstNode* temp = new BstNode;
	temp->data = x;
	temp->left = temp->right = NULL;
	return temp;
}

bool IsEmpty(BstNode*& root)
{
	return NULL == root;
}
void TreeInsert1(BstNode*& root, int x) //非递归方法
{
	BstNode* temp = CreatNewNode(x);
	if (IsEmpty(root))
	{
		root = temp;
		return;
	}
	BstNode* current = root;
	BstNode* parent = NULL;
	while (NULL != current)
	{
		parent = current;
		if (x <= current->data)
		{
			current = current->left;
		}
		else
		{
			current = current->right;
		}
	}
	if (x <= parent->data)
	{
		parent->left = temp;
	}
	else
	{
		parent->right = temp;
	}
}

BstNode* TreeInsert(BstNode*& root, int x)
{
	if (IsEmpty(root))
	{
		root = CreatNewNode(x);
	}
	else if (x <= root->data)
	{
		TreeInsert(root->left , x);
	}
	else
	{
		TreeInsert(root->right, x);

	}
	return root;
  
}

bool NodeSearch(BstNode*& root, int x)
{
	if (IsEmpty(root)) return false;  // 如果树为空，返回 false
	else if (x == root->data) return true;
	else if (x <= root->data) return NodeSearch(root->left, x);
	else return NodeSearch(root->right, x);
}