#include <iostream>;
using namespace std;

int factorial(int);

int main()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;
	int factor = factorial(num);
	cout << num << "! = " << factor;
	return 0;
}

int factorial (int num)
{
	int res = 1;
	for (int i = 1; i <= num; ++i)
		res = res*i;
	return res;
}