#include <iostream>;
using namespace std;
void sumNum(char*);

int main() {

	char num[10];
	cin >> num;
	sumNum(num);
	return 0;
}

void sumNum(char* ch) {
	int sum = 1;
	int counter = 0;
	while (ch[counter]) {
		sum *= ch[counter] - '0'; //ASCII
		counter++;
	}
	cout << sum;
}