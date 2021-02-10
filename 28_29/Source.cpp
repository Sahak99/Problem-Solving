#include <iostream>;
#include <time.h>;
using namespace std;
void printOdd(int*,int);
void printEven(int*,int);
int* createArray(int);
void deleteArray(int*);

int main() {
	int length;
	cout << "Enter the array length: ";
	cin >> length;
	int* p = createArray(length);
	printOdd(p, length);
	printEven(p, length);
	deleteArray(p);
	return 0;
}

int* createArray(int length) {
	int* p = new int[length];
	for (int i = 0; i < length; i++) {
		p[i] = rand() % 100;
		cout << p[i] << " ";
	}
	cout << endl;
	return p;
}

void printOdd(int* p, int length) {
	int num = 0;
	for (int i = 0; i < length; i++)
		if (p[i] % 2) num = num + 1;
	cout << "There are " << num << " odd numbers in this array." << endl;
}

void printEven(int* p, int length) {
	int num = 0;
	for (int i = 0; i < length; i++)
		if (p[i] % 2 == 0) num = num + 1;
	cout << "There are " << num << " even numbers in this array." << endl;
}

void deleteArray(int* p) {
	delete[] p;
}