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
void TreeInsert1(BstNode*& root, int x) //�ǵݹ鷽��
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
	if (IsEmpty(root)) return false;  // �����Ϊ�գ����� false
	else if (x == root->data) return true;
	else if (x <= root->data) return NodeSearch(root->left, x);
	else return NodeSearch(root->right, x);
}

int FindMin(BstNode*& root)
{
	BstNode* current = root;
	if (IsEmpty(root))
	{
		printf("Tree is empty!\n");
		return -1;
	}
	else if (current->left == NULL)
	{
		return current->data;
	}
	return FindMin(current->left);
}

int FindMax(BstNode*& root)
{
	BstNode* current = root;
	if (IsEmpty(root))
	{
		printf("Tree is empty!\n");
		return -1;
	}
	else if (current->right == NULL)
	{
		return current->data;
	}
	return FindMin(current->right);
}

int FindMin1(BstNode*& root)
{
	if (IsEmpty(root))
	{
		printf("Tree is empty!\n");
		return -1;
	}
	BstNode* current = root;
	while (NULL != current->left)
	{
		current = current->left;
	}
	return current->data;
}
 
int FindMax1(BstNode*& root)
{
	if (IsEmpty(root)) return -1;
	BstNode* current = root;
	while (NULL != current->right)
	{
		current = current->right;
	}
	return current->data;
}
int TreeHeight(BstNode*& root)
{
	if (root == NULL) 
	{
		return -1;  // �����ĸ߶�Ϊ -1��Լ���߶ȴ� 0 ��ʼ
	}

	int leftHeight = TreeHeight(root->left);
	int rightHeight = TreeHeight(root->right);

	return std::max(leftHeight, rightHeight) + 1;
}