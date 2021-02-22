#include <iostream>;
using namespace std;
void printToZero(int);

int main()
{
	int number;
	cout << "Enter a number: ";
	cin >> number;
	printToZero(number);
	return 0;
}

void printToZero(int number)
{
	for (int i = number; i >= 0; --i)
		cout << i << " ";
}