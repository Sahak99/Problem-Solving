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
	cout << number << " ";
	if (number <= 0) return;
	return printToZero(number - 1);
}