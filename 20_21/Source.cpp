#include <iostream>;
#include <time.h>;
using namespace std;
int* createArray(int);
void sumArr(int*, int*,int);
void mulArr(int*, int*,int);
int main() {
	int len;
	cout << "Enter the length of the array: ";
	cin >> len;
	int* arr1 = createArray(len);
	int* arr2 = createArray(len);
	sumArr(arr1, arr2, len);
	mulArr(arr1, arr2, len);
	return 0;
}

int* createArray(int len) {
	
	int* p = new int[len];
	cout << "Array: ";
	for (int i = 0; i < len; i++) {
		p[i] = rand() % 100;
		cout << p[i] << " ";
	}
	cout << endl;
	return p;
}

void sumArr(int* p1, int* p2, int len) {
	int* sum = new int[len];
	cout << "Array + Array: ";
	for (int i = 0; i < len; i++) {
		sum[i] = p1[i] + p2[i];
		cout << sum[i] << " ";
	}
	cout << endl;
}


void mulArr(int* p1, int* p2, int len) {
	int* mul = new int[len];
	cout << "Array * Array: ";
	for (int i = 0; i < len; i++) {
		mul[i] = p1[i] * p2[i];
		cout << mul[i] << " ";
	}
	cout << endl;
}
