#include <iostream>;
#include <time.h>;
using namespace std;
int* createArray(int);
void printArray(int*,int);
void deleteArray(int*);

int main()
{
	int len;
	cout << "Enter array length: ";
	cin >> len;
	int* p = createArray(len);
	printArray(p,len);
	deleteArray(p);
	return 0;
}

int* createArray(int length)
{
	int* p = new int[length];
	for (int i = 0; i < length; i++)
		p[i] = rand() % 100;
	return p;
}

void printArray(int* p,int length)
{
	cout << p[length-1] << " ";
	if (length >= 2)
		return printArray(p, length - 1);
	else return;
}

void deleteArray(int* p)
{
	delete[] p;
}