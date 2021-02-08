#include <iostream>;
using namespace std;
void minMaxAdd(int*);
void revArr(int*);
int len;

int main() {
	cout << "Insert array length: ";
	cin >> len;
	int* p = new int[len];
	for (int i = 0; i < len; i++) {
		cout << "Enter Array[" << i << "]: ";
		cin >> *(p + i);
	}
	minMaxAdd(p);
	
	revArr(p);

	return 0;
}

void minMaxAdd(int* p) {
	int max = p[0];
	int min = p[0];
	int indexMax = 0;
	int indexMin = 0;

	for( int i = 0; i < len; i++ ) {
		if (max < * (p + i)) {
			max = *(p + i);
			indexMax = i;
		}
		if (min > *(p + i)) {
			min = *(p + i);
			indexMin = i;
		}
	}
	cout << "Max Index: " << indexMax << endl;
	cout << "Min Index: " << indexMin << endl;
	cout << "Min + Max: " << min + max << endl;

}

void revArr(int* p) {
	for (int i = len-1; i >= 0; i--) cout << *(p + i) << " ";
	cout << endl;
}