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
	if (num == 0) return 0;
	if (num == 1) return 1;
	else return(fibonacci(num - 1) + fibonacci(num - 2));
}