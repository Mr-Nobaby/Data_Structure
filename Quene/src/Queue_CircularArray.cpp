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
	{    // 如果队列为空，直接返回
		if (isEmpty())
		{
			printf("Queue is empty\n");
			return;
		}
		// 从 front 开始，遍历到 rear
		printf("Queue: ");
		int i = front;
		while (true)
		{
			printf("%d ", A[i]); // 打印当前元素
			if (i == rear) // 如果到达尾部，停止遍历
				break;
			i = (i + 1) % MAX_SIZE; // 环形遍历
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