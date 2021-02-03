#include <iostream>;
using namespace std;
void printNum(char*);

int main() {
	char num[10];
	
	cout << "Enter a number" << endl;
	cin >> num;
	printNum(num);
	
	return 0;
}

void printNum(char* a) {
	char* p = &a[0];
	int count = 0;
	while (p[count]) {
	cout << *(p + count) << ", ";
	count++;
	}
};