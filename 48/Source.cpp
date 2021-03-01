#include <iostream>;
using namespace std;
int* createArray(int);
int* deleteElement(int*, int, int);
void deleteArray(int*);

int main() 
{
	int len;
	cout << "Enter array length: ";
	cin >> len;
	int* arr = createArray(len);
	int index;
	cout << "Enter the index of the element you want to remove: ";
	cin >> index;
	int* newArr = deleteElement(arr, len, index);
	deleteArray(arr);
	deleteArray(newArr);

	return 0;
}

int* createArray(int length)
{
	int* p = new int[length];
	for (int i = 0; i < length; i++)
	{
		p[i] = rand() % 100;
		cout << p[i] << " ";
	}
	cout << endl;
	return p;
}
int* deleteElement(int* arr, int length, int index)
{
	int* newArr = new int[length - 1];
	for (int i = 0; i < index; i++)
	{
		newArr[i] = arr[i];
		cout << newArr[i] << " ";
	}
	for (int i = index + 1; i < length; i++) 
	{
		newArr[(i - 1)] = arr[i];
		cout << newArr[i-1] << " ";
	}
	cout << endl;
	return newArr;
}
void deleteArray(int* p)
{
	delete[] p;
}