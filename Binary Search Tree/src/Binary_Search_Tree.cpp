#include "Binary_Search_Tree.h"
using namespace std;

BstNode* CreatNewNode(int x)
{
	BstNode* temp = new BstNode;
	temp->data = x;
	temp->left = temp->right = NULL;
	return temp;
}

BstNode* CreatNewNodeString(char x)
{
	BstNode* temp = new BstNode;
	temp->character = x;
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

BstNode* TreeInsertString(BstNode*& root, char x)
{
	if (IsEmpty(root))
	{
		root = CreatNewNodeString(x);
	}
	else if (x <= root->character)
	{
		TreeInsertString(root->left, x);
	}
	else
	{
		TreeInsertString(root->right, x);
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

BstNode* FindMin(BstNode*& root)
{
	BstNode* current = root;
	if (IsEmpty(root))
	{
		printf("Tree is empty!\n");
		return NULL;
	}
	else if (current->left == NULL)
	{
		return current;
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
	return FindMax(current->right);
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
		return -1;  // 空树的高度为 -1，约定高度从 0 开始
	}

	int leftHeight = TreeHeight(root->left);
	int rightHeight = TreeHeight(root->right);

	return std::max(leftHeight, rightHeight) + 1;
}

void LevelOrder(BstNode*& root)
{
	if (IsEmpty(root)) return;
	queue<BstNode*> q;
	q.push(root);
	while (!q.empty())
	{
		BstNode* current = q.front();
		q.pop();
		cout << current->character << " ";
		if (current->left) q.push(current->left);
		if (current->right) q.push(current->right);
	}
	cout << endl;
}

void PreOrder(BstNode*& root)
{
	if (root == NULL) return;
	printf("%c ", root->data);
	PreOrder(root->left);
	PreOrder(root->right);
}

void InOrder(BstNode*& root)
{
	if (root == NULL) return;
	PreOrder(root->left);
	printf("%c ", root->data);
	PreOrder(root->right);
}
void PostOrder(BstNode*& root)
{
	if (root == NULL) return;
	PreOrder(root->left);
	PreOrder(root->right);
	printf("%c ", root->data);
}
bool IsSubtreeLesser(BstNode*& root, int val)
{
	if (NULL == root) return true;
	if (root->data <= val
		&& IsSubtreeLesser(root->left, val)
		&& IsSubtreeLesser(root->right, val))return true;
	return false;
}
bool IsSubtreeGreater(BstNode*& root, int val)
{
	if (NULL == root) return true;
	if (root->data > val
		&& IsSubtreeGreater(root->left, val)
		&& IsSubtreeGreater(root->right, val))return true;
	return false;
}

bool IsBinarySearchTree(BstNode*& root)
{
	if (NULL == root) return true;
	if (IsSubtreeLesser(root->left, root->data)
		&& IsSubtreeGreater(root->right, root->data)
		&& IsBinarySearchTree(root->left)
		&& IsBinarySearchTree(root->right)) return true;
	return false;  
}

bool IsBinarySearchTreeUtil(BstNode*& root, int min, int max)
{
	if (NULL == root) return true;
	if (root->data > min
		&& root->data < max
		&& IsBinarySearchTreeUtil(root->left, min, root->data)
		&& IsBinarySearchTreeUtil(root->right, root->data, max)) return true;
	return false;
}
bool IsBinarySearchTree1(BstNode*& root)
{
	return IsBinarySearchTreeUtil(root, INT_MAX, INT_MIN);
}

BstNode* NodeDelete(BstNode*& root, int x)
{
	if (NULL == root) return root;
	else if (x < root->data) 
	{
		root->left = NodeDelete(root->left, x);
	}
	else if(x > root->data) 
	{
		root->right = NodeDelete(root->right, x);
	}
	else//Found data
	{
		//1.No child 
		if (root->left == NULL && root->right == NULL)
		{
			delete root;
			root = NULL;
			return root;
		}
		//2.One child
		else if (root->left == NULL)
		{
			BstNode* temp = root;
			root = root->right;
			delete temp;
		}
		else if (root->right == NULL)
		{
			BstNode* temp = root;
			root = root->left;
			delete temp;
		}
		//Twe children
		else
		{
			BstNode* temp = FindMin(root->right);
			root->data = temp->data;
			root->right = NodeDelete(root->right, temp->data); 
		}
	}
	return root;
}
