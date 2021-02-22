#include <iostream>;
using namespace std;
int factorial(int);

int main()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;
	int result = factorial(num);
	cout << num << "! = " << result;
	return 0;
}

int factorial(int num)
{
	if (num > 1) 
		return num * factorial(num - 1);
	else return 1;
}