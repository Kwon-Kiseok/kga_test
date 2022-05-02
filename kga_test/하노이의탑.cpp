#include <iostream>
#include <string>

// Left = {1, 2, 3} ~> Right = {1, 2, 3} 이 되도록
// 검색 참고함

using namespace std;

void hanoi(int n, string start, string center, string end);

int main()
{
	int n = 0;

	cin >> n;

	hanoi(n, "A", "B", "C");

	return 0;
}

void hanoi(int n, string start, string center, string end)
{
	if (n == 1)
	{
		cout << "disk" << n << " from tower" << start << " to tower" << end << endl;
	}
	else
	{
		hanoi(n - 1, start, end, center);
		cout << "disk" << n << " from tower" << start << " to tower" << end << endl;
		hanoi(n - 1, center, start, end);
	}
}