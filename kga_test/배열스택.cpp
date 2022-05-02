#include <iostream>

using namespace std;

// 배열을 이용하여 스택을 구현하라
// push, pop, print, isFull, isEmpty

template <typename T>
class Stack
{
private:
	int capacity;
	int top;
	T* arr;
public:
	Stack(int size)
		:capacity(size), top(-1)
	{
		arr = new T[size];
	}
	~Stack()
	{
		arr = nullptr;
		delete[] arr;
	}
	int GetSize()
	{
		return capacity;
	}
	void push(T value)
	{
		if (isFull())
			cout << "Stack is Full" << endl;
		else
			arr[++top] = value;
	}
	T pop()
	{
		if (isEmpty())
		{
			cout << "Stack is Empty" << endl;
		}
		else
			return arr[top--];
	}
	void print()
	{
		for (int i = 0; i < top + 1; ++i)
			cout << arr[i] << endl;
	}
	bool isFull()
	{
		return top == (capacity - 1);
	}
	bool isEmpty()
	{
		return top == -1;
	}
};

int main()
{
	Stack<int> stack(5);

	stack.push(1);
	stack.push(2);
	stack.push(3);
	stack.push(4);
	stack.push(5);
	stack.push(6);	// is Full

	stack.pop();
	stack.print();

	std::cout << "----" << std::endl;

	Stack<char> stack2(3);

	stack2.push('a');
	stack2.push('b');
	stack2.push('c');

	stack2.pop();
	stack2.print();

	return 0;
}