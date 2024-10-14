#include "stack.h"


void Push(Node*& top, int x)
{
	Node* temp = new Node;
	temp->next = top;
	temp->data = x;
	top = temp;

}

void Pop(Node*& top)
{
	Node* temp;
	assert(top);
	temp = top;
	top = top->next;
	delete temp;
}

void Print(Node*& top)
{
	Node* current = top;  // 从栈顶开始遍历

	while (current != nullptr)  // 只要当前节点不为 nullptr，就继续遍历
	{
		std::cout << current->data << " -> ";  // 输出当前节点的数据
		current = current->next;  // 移动到下一个节点
	}

	std::cout << "NULL" << std::endl;  // 遍历结束，输出 NULL 表示链表结束
}

void Reverse(char c[])
{

}