#include <iostream>

// 1 1 2 3 5 8 13 ..

int fibo(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}

	return fibo(n - 2) + fibo(n - 1);
}

int main()
{
	std::cout << fibo(7) << std::endl;
	return 0;
}