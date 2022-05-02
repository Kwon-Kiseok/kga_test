#include <iostream>

// Left = {1, 2, 3} ~> Right = {1, 2, 3} 이 되도록
using namespace std;


int hanoi(int Left[], int Center[], int Right[], int top, int count);

int main()
{
	int n = 0;
	int count = 0;
	cin >> n;

	int* Left = new int[n];
	int* Center = new int[n];
	int* Right = new int[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> Left[i];
	}


	


	delete[] Left;
	delete[] Center;
	delete[] Right;

	return 0;
}

int hanoi(int Left[], int Center[], int Right[], int top, int count)
{
	count++;

	// 한 번 들어올 때 
}