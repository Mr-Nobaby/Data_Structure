#include<iostream>
using namespace std;
#define MAX_SIZE 10
class Queue
{
private:
	int A[MAX_SIZE];
	int front, rear;
public:
	Queue() { front = rear = -1; }
	bool isEmpty() { return(front == -1 && rear == -1); }
	bool isFull() { return ((rear + 1) % MAX_SIZE == front); }
	void Push(int x)
	{
		if (isFull()) printf("Queue is full\n");
		else if (isEmpty()) front = rear = 0;
		else  rear = (rear + 1) % MAX_SIZE;
		A[rear] = x;
	}
	int Pop()
	{
		if (isEmpty()) printf("Queue is empty\n");
		else
		{
			int popNum = A[front];
			front = (front + 1) % MAX_SIZE;
			return popNum;
		}
	}
	int Front()
	{
		if (isEmpty()) printf("Queue is empty\n");
		else return A[front];
	}
	void Print()
	{    // �������Ϊ�գ�ֱ�ӷ���
		if (isEmpty())
		{
			printf("Queue is empty\n");
			return;
		}
		// �� front ��ʼ�������� rear
		printf("Queue: ");
		int i = front;
		while (true)
		{
			printf("%d ", A[i]); // ��ӡ��ǰԪ��
			if (i == rear) // �������β����ֹͣ����
				break;
			i = (i + 1) % MAX_SIZE; // ���α���
		}
		printf("\n");
	}
};

int main()
{
	Queue Q; 
	Q.Push(1);
	Q.Push(2);
	Q.Print();
}