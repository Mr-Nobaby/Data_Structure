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
	Node* current = top;  // ��ջ����ʼ����

	while (current != nullptr)  // ֻҪ��ǰ�ڵ㲻Ϊ nullptr���ͼ�������
	{
		std::cout << current->data << " -> ";  // �����ǰ�ڵ������
		current = current->next;  // �ƶ�����һ���ڵ�
	}

	std::cout << "NULL" << std::endl;  // ������������� NULL ��ʾ�������
}

void Reverse(char c[])
{

}