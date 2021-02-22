#include <iostream>;
using namespace std;
int fibonacci(int);

int main()
{
	int number;
	cout << "Enter a number: ";
	cin >> number;
	int res = fibonacci(number);
	cout << res;
	return 0;
}

int fibonacci(int num)
{
	int first = 1, second = 1, third = 1;
	for (int i = 2; i < num; i++)
	{
		third = first + second;
		first = second;
		second = third;
	}
	return third;
}