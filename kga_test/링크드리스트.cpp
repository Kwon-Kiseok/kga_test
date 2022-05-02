#include <iostream>

// 각 요소인 노드들을 연결지어서 데이터를 관리하는 선형 자료구조
// 검색 참고함

using namespace std;

struct node
{
	node* next;
	int data;
};

class LinkedList
{
private:
	node* head;
	node* tail;
public:
	LinkedList()
	{
		head = NULL;
		tail = NULL;
	}

	node* GetHead()
	{
		return head;
	}

	node* GetTail()
	{
		return tail;
	}

	void Print(node* head)
	{
		if (head == NULL)
			return;
		cout << head->data << ", ";
		Print(head->next);
	}

	void AddFront(int value)
	{
		node* temp = new node;
		temp->next = nullptr;
		temp->data = value;

		if (head == NULL)
		{
			head = temp;
			tail = temp;
		}
		else
		{
			temp->next = head;
			head = temp;
		}
	}

	void Insert(node* prev, int value)
	{
		node* temp = new node;
		
		temp->next = prev->next;
		temp->data = value;

		prev->next = temp;
	}

	void Delete(node* prev)
	{
		node* temp = prev->next;

		prev->next = temp->next;

		delete temp;
	}
};


int main()
{
	LinkedList list;

	list.AddFront(3);
	list.AddFront(4);
	list.AddFront(5);
	list.AddFront(6);

	list.Insert(list.GetHead(), 1);
	list.Delete(list.GetHead());

	list.Print(list.GetHead());
	return 0;
}